// kimatu.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void shuffle(int ary[], int size);

int i = 0;
int j = 0;
int list[9];
int randomnum = 0;
int checknum = 0;

void shuffle(int ary[], int size)
{
    for (int i = 0; i < size; i++)
    {

        int j = rand() % size;
        int t = ary[i];
        ary[i] = ary[j];
        ary[j] = t;
    }
}

int main(void) {
    int list[] = { 1,2,3,4,5,6,7,8,9 };
    int list2[] = { 1,2,3,4,5,6,7,8,9 };

    shuffle(list, 9);


    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (j % 3 == 0) {
                printf("\n");
            }
            if (list[j] == 0) {
                printf(" _ ");
            }
            else {
                printf(" ");
                printf("%d", list2[j]);
                printf(" ");
            }
        }
        printf("\n");
        printf("%d",list[i]);
        printf("が出ました\n");
        printf("\nEnterを押してください\n");
        char ch = getc(stdin);
        }
    return 0;
}





// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
