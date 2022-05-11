// 여러분은 아래와 같은 Date 클래스를 디자인 하려고 합니다. SetDate 는 말그대로 Date 함수 내부
// 를 초기화 하는 것이고 AddDay, AddMonth, AddYear 는 일, 월, 년을 원하는 만큼 더하게 됩니다. 한
// 가지 주의할 점은 만일 2012 년 2 월 28 일에 3 일을 더하면 2012 년 2 월 31 일이 되는 것이 아니라 2012
// 년 3 월 2 일이 되겠지요? (난이도 : 上)

#include <iostream>

class Date {
  int year_;
  int month_;  // 1 부터 12 까지.
  int day_;    // 1 부터 31 까지.

  const int MAX_DAY[13] = {0,31,28,31,30,31,30,31,30,31,30,31};

 public:

  int check_leaf_year()
  {
      if(((year_ % 4) == 0) && ((year_ % 100) != 0) && ((year_ % 400) == 0))
      {
          return 1;
      }
      else
      {
          return 0;
      }
  }

  void SetDate(int year, int month, int date)
  {
      year_ = year;
      month_ = month;
      day_ = date;
  }
  void AddDay(int inc)
  {
    day_ += inc;

    if (check_leaf_year() == 0)
    {
        while (day_ > MAX_DAY[month_])
        {
            day_ -= MAX_DAY[month_];
            month_ += 1;

            if (month_ > 12)
            {
                year_ += 1;
                month_ -= 12;
            }
        }
    }
    else
    {
        while (day_ > MAX_DAY[month_])
        {
            if (month_ == 2)
            {

                day_ -= (MAX_DAY[month_] - 1) ;
                month_ += 1;
            }
            else
            {
                day_ -= (MAX_DAY[month_]) ;
                month_ += 1;
                if (month_>12)
                {
                    year_ += 1;
                    month_ -= 12;
                }
            }

        }

    }
  }

  void AddMonth(int inc);
  void AddYear(int inc);

  void ShowDate()
  {
    std::cout << year_ << "." << month_ << "." << day_ << std::endl;

  }
};


int main()
{
    Date date;
    date.SetDate(2022,5,10);

    date.AddDay(60);

    date.ShowDate();

    return 0;
}