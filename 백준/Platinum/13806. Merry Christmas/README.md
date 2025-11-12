# [Platinum III] Merry Christmas - 13806 

[문제 링크](https://www.acmicpc.net/problem/13806) 

### 성능 요약

메모리: 18764 KB, 시간: 456 ms

### 분류

그래프 이론, 최단 경로, 최대 유량, 이분 매칭, 플로이드–워셜

### 제출 일자

2025년 11월 13일 06:13:40

### 문제 설명

<p>International Christmas Present Company (ICPC) is a company to employ Santa and deliver presents on Christmas. Many parents request ICPC to deliver presents to their children at specified time of December 24. Although same Santa can deliver two or more presents, because it takes time to move between houses, two or more Santa might be needed to finish all the requests on time.</p>

<p>Employing Santa needs much money, so the president of ICPC employed you, a great programmer, to optimize delivery schedule. Your task is to write a program to calculate the minimum number of Santa necessary to finish the given requests on time. Because each Santa has been well trained and can conceal himself in the town, you can put the initial position of each Santa anywhere.</p>

### 입력 

 <p>The input consists of several datasets. Each dataset is formatted as follows.</p>

<pre><code>N M L 
u<sub>1</sub> v<sub>1</sub> d<sub>1</sub> 
u<sub>2</sub> v<sub>2</sub> d<sub>2</sub> 
. 
. 
. 
u<sub>M</sub> v<sub>M</sub> d<sub>M</sub> 
p<sub>1</sub> t<sub>1</sub> 
p<sub>2</sub> t<sub>2</sub> 
. 
. 
. 
p<sub>L</sub> t<sub>L </sub></code></pre>

<p>The first line of a dataset contains three integer, N, M and L (1 ≤ N ≤ 100, 0 ≤ M ≤ 1000, 1 ≤ L ≤ 1000) each indicates the number of houses, roads and requests respectively.</p>

<p>The following M lines describe the road network. The i-th line contains three integers, u<sub>i</sub> , v<sub>i</sub> , and d<sub>i </sub>(0 ≤ u<sub>i</sub> < v<sub>i</sub> ≤ N − 1, 1 ≤ d<sub>i </sub>≤ 100) which means that there is a road connecting houses u<sub>i</sub> and v<sub>i</sub> with d<sub>i</sub> length. Each road is bidirectional. There is at most one road between same pair of houses. Whole network might be disconnected.</p>

<p>The next L lines describe the requests. The i-th line contains two integers, p<sub>i</sub> and t<sub>i </sub>(0 ≤ p<sub>i</sub> ≤ N − 1, 0 ≤ t<sub>i</sub> ≤ 10<sup>8</sup> ) which means that there is a delivery request to house p<sub>i</sub> on time t<sub>i</sub> . There is at most one request for same place and time. You can assume that time taken other than movement can be neglectable, and every Santa has the same speed, one unit distance per unit time.</p>

<p>The end of the input is indicated by a line containing three zeros separated by a space, and you should not process this as a test case.</p>

### 출력 

 <p>Print the minimum number of Santa necessary to finish all the requests on time.</p>

