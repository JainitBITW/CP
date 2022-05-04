#include <bits/stdc++.h>

using namespace std;

#define for_(i,s,e) for ( i=s; ((i<e)&&(s<e))||((i>e)&&(s>=e)); (s<e)?i++:i--)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;

int i,j,t,n,k,c,ans,x,temp;
vvi vec(100005,vi(53,0));
int veccopy[100005][53];
int arrmax[100005][2];
bool isequal;

using namespace std;

// Driver function to sort the 2D vector
// on basis of a particular column
bool comp( const vi &v1, const vi &v2 ) {
  for_(i,0,50){
    if (v1[i] < v2[i])
      return 1;
    else if (v1[i] > v2[i])
      return 0;
    else
      continue;
  }
  return v1[i] < v2[i];
}

int comp2( int l ) {
  for_(i,0,50){
    if (vec[l][i] < vec[l-1][i])
      return 0;
    else if (vec[l][i] > vec[l-1][i])
      return 0;
    else
      continue;
  }
  return 1;
}

int temp2[(int)2e5+1][2];
void merge_sort(int s, int e, int arr[][2]){
  if (e-s==1) return;
  merge_sort(s,(s+e)/2,arr); merge_sort((s+e)/2,e,arr);
  for_(i,s,(s+e)/2){ temp2[i][0] = arr[i][0]; temp2[i][1] = arr[i][1];}
  i=s; j=(s+e)/2;
  while (i<(s+e)/2 && j<e){
    if (temp2[i][0] < arr[j][0] || ((temp2[i][0] == arr[j][0]) && (temp2[i][1] < arr[j][1]))){
      arr[i+j-(s+e)/2][0] = temp2[i][0];
      arr[i+j-(s+e)/2][1] = temp2[i][1];
      i++;
    }
    else{
      arr[i+j-(s+e)/2][0] = arr[j][0];
      arr[i+j-(s+e)/2][1] = arr[j][1];
      j++;
    }
  }
  while (i<(s+e)/2){
      arr[i+j-(s+e)/2][0] = temp2[i][0];
      arr[i+j-(s+e)/2][1] = temp2[i][1];
      i++;
  }
  while (j<e){
      arr[i+j-(s+e)/2][0] = arr[j][0];
      arr[i+j-(s+e)/2][1] = arr[j][1];
      j++;
  }
}


int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);

  cin >> n >> k;

  for_(i,0,3*n){
    for_(j,0,55){
      c = getchar();
      if (c=='\n') break;
      vec[i][j] = c;
    }
    vec[i][51] = 3*n-i;
  }

  for_(i,0,3*n){
    for_(j,0,50){
      veccopy[i][j] = vec[i][j];
    }
  }

  // cout << "\n";


  // cout << "\nThe Matrix before sorting is:\n";
  // for_(i,0,3*n){
  //   for_(j,0,50)
  //     cout << (char)vec[i][j] << " ";
  //   cout << '\n';
  // }
  //
  // cout << "\nveccopy is:\n";
  // for_(i,0,3*n){
  //   for_(j,0,50)
  //   cout << (char)veccopy[i][j] << " ";
  //   cout << '\n';
  // }

  sort(vec.begin(), vec.begin()+3*n, comp);

  // cout << "\nThe Matrix after sorting is:\n";
  // for_(i,0,3*n){
  //   for_(j,0,52)
  //     cout << (char)vec[i][j] << " ";
  //   cout << '\n';
  // }

  int curmax=100005;
  arrmax[0][0] = 100005; arrmax[0][1] = vec[0][51];
  curmax=100005;
  j=0;
  for_(i,1,3*n){
    isequal = 1;
    for_(x,0,50){
      if (vec[i][x] < vec[i-1][x]){
        isequal = 0;
        break;
      }
      else if (vec[i][x] > vec[i-1][x]){
        isequal = 0;
        break;
      }
      else
        continue;
    }

    if (isequal == 1){
      curmax--;
      arrmax[j][0] = curmax;
      arrmax[j][1] = min(arrmax[j][1],vec[i][51]);
    }
    else{
      curmax = 100005;
      j++;
      arrmax[j][0] = curmax;
      arrmax[j][1] = vec[i][51];
    }
  }

  int arrmaxlen = j+1;

  // for_(i,0,arrmaxlen){
  //   cout << arrmax[i][0] << ' ' << arrmax[i][1] << '\n';
  // }
  // cout << '\n';

  merge_sort(0,arrmaxlen,arrmax);

  // for_(i,0,arrmaxlen){
  //   cout << arrmax[i][0] << ' ' << arrmax[i][1] << '\n';
  // }
  // cout << '\n';

  // cout << "\nveccopy is:\n";
  // for_(i,0,3*n){
  //   for_(j,0,50)
  //   cout << (char)veccopy[i][j] << ' ';
  //   cout << '\n';
  // }
  // cout << "hi\n";

  char charc;
  for (i=0;i<k&&i<arrmaxlen;i++){
    for_(j,0,50){
      temp = 3*n - arrmax[i][1];
      if (veccopy[temp][j]==0)
        break;
      putchar(veccopy[temp][j]);
      // charc = veccopy[temp][j];
      // cout << charc;
    }
    putchar('\n');
  }

  return 0;
}