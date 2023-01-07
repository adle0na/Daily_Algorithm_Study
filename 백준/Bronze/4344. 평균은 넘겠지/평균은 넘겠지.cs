using System;
using static System.Console;

namespace _1차원배열7
{
    class 평균은넘겠지
    {
        static void Main(string[] args)
        {
            // 테스트 케이스 입력받음
            int c = int.Parse(ReadLine());
            
            // c가 0보다 크면 계속 반복됨.
            while (c > 0)
            {
                // c를 매번 감소시켜서 총 c 만큼만 반복되게 만듦.
                c--;

                // 숫자를 입력받음. s[0]이 학생수, s[1]부터 점수
                string[] s = ReadLine().Split();

                int sum = 0;
                
                // 평균 구하기
                for (int i = 1; i < s.Length; i++)
                {
                    sum += int.Parse(s[i]);
                }
                int average = sum / int.Parse(s[0]);

                int result = 0;
                
                // 평균 넘는 사람 찾기
                for (int i = 1; i < s.Length; i++)
                {
                    if (int.Parse(s[i]) > average)
                    {
                        result++;
                    }
                }
                // int끼리는 나눠도 소수점이 발생하지 않으므로, float형으로 변환뒤 스트링포멧으로 출력
                WriteLine($"{(float)result / float.Parse(s[0]) * 100:0.000}%");
            }
        }
    }
}