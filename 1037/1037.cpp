#include<iostream>

using namespace std;

int main()
{
	int P_Galleon, P_Sickle, P_Knut;
	int A_Galleon, A_Sickle, A_Knut;

	scanf("%d.%d.%d %d.%d.%d",
		&P_Galleon, &P_Sickle, &P_Knut,
		&A_Galleon, &A_Sickle, &A_Knut);
	long P_Total_Knut = P_Galleon * 17 * 29 + P_Sickle * 29 + P_Knut;
	long A_Total_Knut = A_Galleon * 17 * 29 + A_Sickle * 29 + A_Knut;

	long Ans_Total_knut = A_Total_Knut - P_Total_Knut;
	if (Ans_Total_knut < 0)
	{
		printf("-");
		Ans_Total_knut = -Ans_Total_knut;
	}
	int Ans_Galleon, Ans_Sickle, Ans_knut;
	Ans_Galleon = Ans_Total_knut / (17 * 29);
	Ans_Sickle = (Ans_Total_knut % (17 * 29)) / 29;
	Ans_knut = Ans_Total_knut % 29;

	printf("%d.%d.%d", Ans_Galleon, Ans_Sickle, Ans_knut);
	return 0;
}