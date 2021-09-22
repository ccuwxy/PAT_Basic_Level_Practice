#include<iostream>

using namespace std;

struct Person
{
	char name[6];
	int year;
	int month;
	int day;
};

int main()
{
	int n;
	scanf("%d", &n);
	Person *persons = new Person[n];
	char name[6];
	int year, month, day;
	int old, young;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d/%d/%d", persons[i].name, &year, &month, &day);
		if (year > 2014 || year < 1814)
			continue;
		if (year == 2014)
		{
			if (month > 9)
				continue;
			else if(month == 9)
			{
				if (day > 6)
					continue;
			}
		}
		if (year == 1814)
		{
			if (month < 9)
				continue;
			else if (month == 9)
				if (day < 6)
					continue;
		}

		if (count > 0)
		{
			if (persons[old].year > year)
				old = i;
			else if (persons[old].year == year)
			{
				if (persons[old].month > month)
					old = i;
				else if (persons[old].month == month)
					if (persons[old].day > day)
						old = i;
			}
			if (persons[young].year < year)
				young = i;
			else if (persons[young].year == year)
			{
				if (persons[young].month < month)
					young = i;
				else if (persons[young].month == month)
					if (persons[young].day < day)
						young = i;
			}
		}
		
		persons[i].year = year;
		persons[i].month = month;
		persons[i].day = day;
		if (!count)
		{
			old = i;
			young = i;
		}
		count++;
	}
	if (count == 0)
		printf("0");
	else
		printf("%d %s %s", count, persons[old].name, persons[young].name);
	return 0;
}