#include <iostream>
#define N 10
using namespace std;
// x là hàng, y là cột như tọa độ canvas
void print(int chess[N][N]) 
{ 
    for (int i = 0; i < N; i++)
    { 
        for (int j = 0; j < N; j++) 
            cout << "  " << chess[i][j]; 
        cout << endl;
    } 
}
bool check_safe(int chess[N][N], int x, int y) 
{ 
    int i, j;
    //check bên trái vị trí
    for (i = 0; i < y; i++) 
        if (chess[x][i] == 1) 
            return 0;
    //check chéo trên, bên trái vị trí
    for (i = x, j = y; i >= 0 && j >= 0; i--, j--) 
        if (chess[i][j] == 1) 
            return 0;
    //check chéo trên, bên phải vị trí
    for (i = x, j = y; j >= 0 && i < N; i++, j--) 
        if (chess[i][j] == 1) 
            return 0; 
    return 1; 
}
bool add_queen(int chess[N][N], int y) 
{
    if (y >= N) //giá trị trả về lớn hơn size
        return 1; 
    for (int i = 0; i < N; i++)
    { 
        if (check_safe(chess, i, y))
        {
            chess[i][y] = 1; 
            if (add_queen(chess, y + 1)) //không thoả nên tăng y đến khi thỏa
                return 1; 
            chess[i][y] = 0;//nếu vị trí này không thỏa thì trả vị trí về 0 để xét tiếp
        } 
    }
    return false; 
}
int main() 
{ 
    int chess[N][N];
    for (int i = 0; i < N; i++)
    { 
        for (int j = 0; j < N; j++) 
            chess[i][j] = 0;
    }
    if (add_queen(chess, 0) == 0) { 
        cout << "Error\n"; 
        return 0; 
    } 
  
    print(chess);
    return 0;
} 