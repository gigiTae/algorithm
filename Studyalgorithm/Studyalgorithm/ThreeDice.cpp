//#include <iostream>
//
//
//int main(void)
//{
//	int Dice1, Dice2, Dice3;
//	int Reward = 0;
//
//	std::cin >> Dice1 >> Dice2 >> Dice3;
//
//	if (Dice1 == Dice2 && Dice1 == Dice3)
//	{
//		Reward = 10000 + Dice1 * 1000;
//	}
//	else if (Dice1 != Dice2 && Dice1 != Dice3 && Dice2 != Dice3)
//	{
//		if (Dice1 > Dice2 && Dice1 > Dice3)
//		{
//			Reward = Dice1 * 100;
//		}
//		else if (Dice2 > Dice1 && Dice2 > Dice3)
//		{
//			Reward = Dice2 * 100;
//		}
//		else
//		{
//			Reward = Dice3 * 100;
//		}
//	}
//	else
//	{
//		if (Dice1 == Dice2)
//		{
//			Reward = 1000 + Dice1 * 100;
//		}
//		else if (Dice1 == Dice3)
//		{
//			Reward = 1000 + Dice1 * 100;
//		}
//		else
//		{
//			Reward = 1000 + Dice2 * 100;
//		}
//	}
//	std::cout << Reward;
//	return 0;
//}


//1�������� 6������ ���� ���� 3���� �ֻ����� ������ ������ ���� ��Ģ�� ���� ����� �޴� ������ �ִ�.
//
//���� ���� 3���� ������ 10, 000�� + (���� ��)��1, 000���� ����� �ް� �ȴ�.
//���� ���� 2���� ������ ��쿡�� 1, 000�� + (���� ��)��100���� ����� �ް� �ȴ�.
//��� �ٸ� ���� ������ ��쿡��(�� �� ���� ū ��)��100���� ����� �ް� �ȴ�.
//���� ���, 3���� �� 3, 3, 6�� �־����� ����� 1, 000 + 3��100���� ���Ǿ� 1, 300���� �ް� �ȴ�.�� 3���� ���� 2, 2, 2�� �־����� 10, 000 + 2��1, 000 ���� ���Ǿ� 12, 000���� �ް� �ȴ�. 3���� ���� 6, 2, 5�� �־����� ���� ���� ū ���� 6�̹Ƿ� 6��100���� ���Ǿ� 600���� ������� �ް� �ȴ�.
//
//3�� �ֻ����� ���� ���� �־��� ��, ����� ����ϴ� ���α׷��� �ۼ� �Ͻÿ�.