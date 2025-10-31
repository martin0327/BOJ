# [Platinum III] Krypton Stadiums - 13770 

[문제 링크](https://www.acmicpc.net/problem/13770) 

### 성능 요약

메모리: 16092 KB, 시간: 1400 ms

### 분류

자료 구조, 세그먼트 트리, 분할 정복, 느리게 갱신되는 세그먼트 트리

### 제출 일자

2025년 10월 31일 14:55:45

### 문제 설명

<p>The planet of Krypton contains n cities. These cities are located in distinct locations all along one straight line running west-east. The cities are labelled 0, 1, 2, . . . , n − 1 in order from west to east. Each city is home to one team and one stadium. Each stadium will have two corresponding integers (a<sub>i</sub> and b<sub>i</sub>) defining an interval of cities that may play at that stadium. That is, a team from city x may only play at stadium i if a<sub>i</sub> ≤ x ≤ b<sub>i </sub>. It is guaranteed that every team will be able to play at its home stadium (a<sub>i </sub>≤ i ≤ b<sub>i</sub>).</p>

<p>You have been hired to make the schedule for the upcoming season and must determine if the layout of the stadiums and cities is great, acceptable or bad.</p>

<ul>
	<li>The layout is great if for every pair of cities, c<sub>1</sub> and c<sub>2</sub>, there is a stadium in between c<sub>1</sub> and c<sub>2</sub> (inclusive) that can host the teams from both c<sub>1</sub> and c<sub>2</sub>.</li>
	<li>The layout is acceptable if it is not great, but for every pair of cities, c<sub>1 </sub>and c<sub>2</sub>, there is some stadium that can host the teams from both c<sub>1</sub> and c<sub>2</sub>.</li>
	<li>The layout is bad if there is some pair of cities where no stadium can host the teams from both cities.</li>
</ul>

### 입력 

 <p>The input will contain multiple test cases.</p>

<p>The first line of each test case will contain an integer n (2 ≤ n ≤ 200 000) denoting the number of cities. The next n lines will give the intervals of each stadium. The intervals are given by exactly 6 characters. The first three characters will denote a<sub>i </sub>and the last three characters will denote b<sub>i</sub> (whose definitions are given above). Each set of three characters will denote a base 62 number (using the ordering 0-9A-Za-z as our alphabet). For example, cities 0, 1, 9, 10, 35, 36, 61, 62 and 199 999 are represented by 000, 001, 009, 00A, 00Z, 00a, 00z, 010 and q1n, respectively.</p>

<p>Input will be terminated by end of file. There will be no more than 1 000 different test cases and there will be no more than 2 000 000 stadiums across all test cases.</p>

### 출력 

 <p>For each test case, output one of three strings: Great, Acceptable or Bad.</p>

