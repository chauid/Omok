#pragma warning(disable:4996)
#pragma once
#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

char getkey_v1(); //����� 
char getkey(); //��: -32or224,75  ��:-32or224,72  ��:-32or224,77  ��:-32or224,80
void SetCursorStyle(int Cursor_size, int Cursor_Visible); // Ŀ�� ������(1~100), 1�̸� Ŀ�� Ȱ��ȭ, 0�̸� Ŀ�� ��Ȱ��ȭ 
void gotoxy(int x, int y); //Ŀ���� �̵� 
bool GameSetting(int* time); //���� ���� �� Ÿ�̸� ���� 
void Start_Screen(); //���� ȭ�� ��� 
void turn_print(int turn); //���� ǥ�� 
void correction(int* col, int* row); //Ŀ���� �������� ����� ���� ����(Ŀ�� ����) 
void column_Printcorrection(int col, int row); //column Ƣ�� ���� ���� 
void OmokTable_letter(int col, int row); // ��:1, ��:2, ��:3, ��:4, ��:5, ��:6, ��:7, ��:8, ��:9 
void GameTimer(int time); //Ÿ�̸� ���(71,3)~(75,13) 
int GameWinner(int(*Omok_array)[19]); //���� �¸� ���� 
void Pause(bool* quit); //���� �Ͻ����� 
bool ReStart(int(*Omok_array)[19], bool win); //���� ����� 

#endif
