class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int column = grid[0].size();

        int n = rows * column;
        k = k % n;

        vector<int> arr(n);
        int q = 0;

        // 2D -> 1D
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < column; j++) {
                arr[q] = grid[i][j];
                q++;
            }
        }

        // Right shift k times
        while (k != 0) {
            int temp = arr[n - 1];

            for (int i = n - 1; i > 0; i--) {
                arr[i] = arr[i - 1];
            }

            arr[0] = temp;   
            k--;
        }

        // 1D -> 2D
        q = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < column; j++) {
                grid[i][j] = arr[q];
                q++;
            }
        }

        return grid;
    }
};