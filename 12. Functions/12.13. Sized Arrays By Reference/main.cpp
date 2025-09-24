#include <iostream>

double sum(const double (&scores)[10]);

int main()
{
     double my_scores[]{6, 4, 5, 3.5, 8, 10, 9, 11, 5, 3}; // shouid just pass 10 numbers

     double result = sum(my_scores);
     std::cout << "result: " << result << std::endl; // 64.5

     return 0;
}

double sum(const double (&scores)[10])
{
     double score_sum{};

     for (size_t i{}; i < std::size(scores); i++)
     {
          score_sum += scores[i];
     }

     return score_sum;
}