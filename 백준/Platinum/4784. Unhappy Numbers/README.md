# [Platinum II] Unhappy Numbers - 4784 

[문제 링크](https://www.acmicpc.net/problem/4784) 

### 성능 요약

메모리: 2752 KB, 시간: 60 ms

### 분류

다이나믹 프로그래밍, 자릿수를 이용한 다이나믹 프로그래밍

### 제출 일자

2026년 4월 5일 14:50:15

### 문제 설명

<p>Numbers have feelings too! For any positive integer, take the sum of the squares of each of its digits, and add them together. Take the result, and do it again. A number is Happy if, after repeating this process a finite number of times, the sum is 1. Some happy numbers take more iterations of this process to get to 1 than others, and that would be referred to as its distance from happiness. 1’s distance from happiness is 0. 23’s distance from happiness is 3, since 2<sup>2</sup> + 3<sup>2</sup> = 13, 1<sup>2</sup> + 3<sup>2</sup> = 10, and 1<sup>2</sup> + 0<sup>2</sup> = 1. Numbers are Unhappy if they are infinitely far away from happiness because they get stuck in a loop.</p>

<p>Given the lower end and upper end of a range of integers, determine how many Unhappy numbers are in that range (inclusive).</p>

### 입력 

 <p>There will be several test cases in the input. Each test case will consist of two positive integers, lo and hi (0<lo≤hi≤10<sup>18</sup>) on a single line, with a single space between them. Input will terminate with two 0s.</p>

### 출력 

 <p>For each test case, output a single integer on its own line, indicating the count of Unhappy Numbers between lo and hi (inclusive). Output no extra spaces, and do not separate answers with blank lines.</p>

