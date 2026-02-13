# [Diamond V] Journey of the Robber - 30485 

[문제 링크](https://www.acmicpc.net/problem/30485) 

### 성능 요약

메모리: 25520 KB, 시간: 392 ms

### 분류

트리, 분할 정복, 최소 공통 조상, 센트로이드, 센트로이드 분할

### 제출 일자

2026년 2월 13일 23:26:56

### 문제 설명

<p>Monopolis is a beautiful and wealthy country. Among its impressive features is the layout of the country, where N cities are interconnected by N − 1 roads of equal length, allowing to travel between any two cities.</p>

<p>Another unique feature of Monopolis is that each city has a single bank with a different amount of money. Thus, it is possible to assign a distinct number from 1 to N to each city, representing its wealth ranking relative to the other cities, with city 1 having the least money and city N having the most.</p>

<p>Rob is planning a “business trip” to Monopolis. Rob’s business is, in fact, robbing. Robbing banks, to be more precise. Rob is an ambitious robber and follows a particular modus operandi: he only targets banks with more money than the one he just robbed. Thus, after robbing in a city i, he moves to the closest city having more money. If there are multiple cities with more money than i at the same distance, he selects the one with the least money. If there’s no city richer than i, he remains in the same city and reflects on his actions.</p>

<p>Even though Rob is very set on his modus operandi, he is still planning his business trip to Monopolis, and then he asks for your assistance. Rob wants to know for each city i which would be the next city to visit in case his first heist is at city i.</p>

### 입력 

 <p>The first line contains an integer N (1 ≤ N ≤ 10<sup>5</sup>) representing the number of cities in Monopolis. Each city is identified by a distinct integer from 1 to N, in increasing order of wealth.</p>

<p>Each of the next N − 1 lines contains two integers U and V (1 ≤ U, V ≤ N and U ≠ V), indicating that there is a two-way road between cities U and V . It is guaranteed that there is a path between each pair of cities using the given roads.</p>

### 출력 

 <p>Output a single line with N integers, such that the i-th of them indicates the next city Rob would visit in case his first heist is at city i.</p>

