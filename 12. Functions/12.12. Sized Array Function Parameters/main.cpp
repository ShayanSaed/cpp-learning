#include <iostream>

double sum(double scores[5], size_t count);

int main()
{
     double my_scores[]{6, 4, 5, 3.5, 8, 10, 9};

     double result = sum(my_scores, std::size(my_scores));
     std::cout << "result: " << result << std::endl; // 45.5

     return 0;
}

double sum(double scores[5], size_t count)
{
     double score_sum{};

     for (size_t i{}; i < count; i++)
     {
          score_sum += scores[i];
     }

     return score_sum;
}