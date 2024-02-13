#include "tasks.h"

/*	Task X. Rectangular World (1) [������������� ���]
*
*	� ������������� ���� ������, ������������� �� �������� ���������������,
*	����� � ���������� ���� �����. ����������, ��������� �� ��������� ������ ����������
*	� ������ ���� ��� ���.
*
*	����������
*	�� �������� ��� "������ �� ������".
*
*	������ ������� ������ [input]
*	������� �������� �� ���� ��� ����� ����� W, L, S: ������ � ����� ������������� ������
*	� ������� ���������� ����.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ���� �� ��������� ��������: true ��� false.
*
*	[sample function input  1]: 4 6 5
*	[sample function output 1]: false
*
*	[input  2]: 3 5 5
*	[output 2]: true
*/

bool taskX(int width, int length, int side) {
	

	do{
		cin >> width >> length >> side;
	} while (width > 0 && length > 0 && side > 0);
	
	return side >= length && side >= width;
}