//sudo

#include <iostream>
using namespace std;
int func();
int main()
{
  while( func() != -1 ) ;
  return 0;
}


int func()
{
  int d, w;
  cin >> d >> w;
  if( d+w == 0 ) return -1;

  int e[10][10] = { { 0 } };
  for( int i = 0; i < d; ++i ){
    for( int j = 0; j < w; ++j ){
      cin >> e[i][j];
    }
  }


  int ans = 0;

  //池のサイズ（横）
  for( int D = 3; D <= d; ++D ){
    for( int W = 3; W <= w; ++W ){

      int size = D*W - (2*D+2*W-4); //水の入るマス

      //cout << "====横====" << endl;
      //cout << "池のサイズ " << D << "*" << W << endl;


      //開始座標
      for( int i = 0; i < d-D+1; ++i ){
        for( int j = 0; j < w-W+1; ++j ){

          //cout << "外周の開始座標 " << i << "*" << j << endl;

          int cnt = 0, mizu = 0;
          int out_min = 10;

          //外
          for( int y = i; y < i+D; ++y ){
            for( int x = j; x < j+W; ++x ){
              if( y == i || y == i+D-1 ){
                out_min = e[y][x] < out_min ? e[y][x] : out_min;
              } else if( x == j || x == j+W-1 ){
                out_min = e[y][x] < out_min ? e[y][x] : out_min;
              }
            }
          }
          //cout << "外周の最低値 " << out_min << endl;
          if( out_min == 0 ){
            cnt += size;
            continue;
          }

          //内
          //cout << "水場のマス数 " << size << endl;

          for( int y = i+1; y < i+D-1; ++y ){
            for( int x = j+1; x < j+W-1; ++x ){
              ++cnt;
              if( e[y][x] < out_min ){
                mizu += out_min - e[y][x];
                //cout << "[" << y << "][" << x << "] " << mizu<< endl;
              } else {
                mizu = 0;
                //cout << "*[" << y << "][" << x << "] " << mizu<< endl;
                cnt += size;
                break;
              }
              if( size <= cnt ) break;
            }
            if( size <= cnt ) break;
          }

          ans = ans < mizu ? mizu : ans;
          //cout << "ans " << ans << endl;
        }
      }
    }
  }

  //池のサイズ（横）
  for( int D = 3; D <= d; ++D ){
    for( int W = 3; W <= w; ++W ){

      int size = D*W - (2*D+2*W-4); //水の入るマス

      //cout << "====横====" << endl;
      //cout << "池のサイズ " << D << "*" << W << endl;


      //開始座標
      for( int i = 0; i < d-D+1; ++i ){
        for( int j = 0; j < w-W+1; ++j ){

          //cout << "外周の開始座標 " << i << "*" << j << endl;

          int cnt = 0, mizu = 0;
          int out_min = 10;

          //外
          for( int y = i; y < i+D; ++y ){
            for( int x = j; x < j+W; ++x ){
              if( y == i || y == i+D-1 ){
                out_min = e[y][x] < out_min ? e[y][x] : out_min;
              } else if( x == j || x == j+W-1 ){
                out_min = e[y][x] < out_min ? e[y][x] : out_min;
              }
            }
          }
          //cout << "外周の最低値 " << out_min << endl;
          if( out_min == 0 ){
            cnt += size;
            continue;
          }

          //内
          //cout << "水場のマス数 " << size << endl;

          for( int y = i+1; y < i+D-1; ++y ){
            for( int x = j+1; x < j+W-1; ++x ){
              ++cnt;
              if( e[y][x] < out_min ){
                mizu += out_min - e[y][x];
                //cout << "[" << y << "][" << x << "] " << mizu<< endl;
              } else {
                mizu = 0;
                //cout << "*[" << y << "][" << x << "] " << mizu<< endl;
                cnt += size;
                break;
              }
              if( size <= cnt ) break;
            }
            if( size <= cnt ) break;
          }

          ans = ans < mizu ? mizu : ans;
          //cout << "ans " << ans << endl;
        }
      }
    }
  }
  
  cout << ans << endl;

  return 0;
}
