# [Diamond V] Awesome Shawarma - 18704 

[문제 링크](https://www.acmicpc.net/problem/18704) 

### 성능 요약

메모리: 28376 KB, 시간: 4056 ms

### 분류

자료 구조, 트리, 세그먼트 트리, 분할 정복, 작은 집합에서 큰 집합으로 합치는 테크닉, 센트로이드, 센트로이드 분할

### 제출 일자

2026년 2월 14일 10:54:34

### 문제 설명

<p>Fouad has a raw awesome shawarma, and he is in a city which is represented as an undirected tree. He heard that there is a magical oven that will cook the Shawarma, to make it so delicious. However, In order to acquire the magical oven, there need to be two conditions that should be satisfied in this city:</p>

<ul>
	<li>One extra edge that must be added to join two different nodes in the tree (It is allowed to join two nodes, which were previously connected by a direct edge).</li>
	<li>The number of bridges after adding the new edge should be between [L, R] inclusively.</li>
</ul>

<p>Please help Fouad to acquire the magical oven, to cook the awesome shawarma by counting in how many ways he can add an edge that satisfies the conditions above.</p>

### 입력 

 <p>The first line of the input file contains a single integer T, the number of test cases.</p>

<p>Each test case begins with a line containing three integers N, L, and R (2 ≤ N ≤ 10<sup>5</sup>, 0 ≤ L ≤ R ≤ N −1), in which N is the number of nodes, and L and R are the minimum and maximum numbers of allowed bridges, respectively.</p>

<p>Then N − 1 lines follow, each line contains two integers X<sub>i</sub> and Y<sub>i</sub> (1 ≤ X<sub>i</sub>, Y<sub>i</sub> ≤ N), giving an edge between nodes X<sub>i</sub> and Y<sub>i</sub>.</p>

### 출력 

 <p>For each test case, print a single line containing the number of ways to add one new edge such that the number of bridges in the new graph is within the range [L, R] inclusively.</p>

