// Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void Clear();

void Clear()
{
#if defined(_WIN32)
    system("cls");   //On windows, do this
#elif defined (__unix__) || (defined (__APPLE__) && defined (__MACH__))
    system("clear");//On Linux/OS X/BSDs
#else                   //For an unrecognized OS, just print 50 newlines
    for (int i = 0; i < 50; ++i) std::cout << std::endl;
#endif
}

// Function to multiply two matrices
vector<vector<int>> matrixMultiply(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int m = A.size(), n = B[0].size(), p = B.size();
    vector<vector<int>> result(m, vector<int>(n, 0));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < p; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

// Function to check if two matrices can be multiplied
bool canMultiply(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    return A[0].size() == B.size();
}

// Function to print a matrix
void printMatrix(const vector<vector<int>>& mat) {
    for (const auto& row : mat) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    while (true)
    {
        int number = 0;
        int m, n, p, q;
        cout << "Enter dimensions of first matrix (m x n): ";
        cin >> m >> n;
        cout << "Enter dimensions of second matrix (p x q): ";
        cin >> p >> q;

        if (n != p) {
            cout << "Matrices are not multipliable!" << endl;
            main();
            return 0;
        }

        vector<vector<int>> A(m, vector<int>(n)), B(p, vector<int>(q));
        cout << "Enter elements of first matrix:" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> A[i][j];
            }
        }
        cout << "Enter elements of second matrix:" << endl;
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < q; ++j) {
                cin >> B[i][j];
            }
        }

        if (!canMultiply(A, B)) {
            cout << "Matrices are not multipliable!" << endl;
            main();
            return 0;
        }

        vector<vector<int>> result = matrixMultiply(A, B);
        cout << "Resultant matrix:" << endl;
        printMatrix(result);

        cin.ignore();
        cin.get();
        Clear();
        main();

        return 0;
    }
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
