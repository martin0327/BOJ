# [Platinum V] Moo University - Team Tryouts - 27016 

[문제 링크](https://www.acmicpc.net/problem/27016) 

### 성능 요약

메모리: 13220 KB, 시간: 68 ms

### 분류

수학, 브루트포스 알고리즘, 정렬, 스위핑

### 제출 일자

2026년 2월 27일 05:01:48

### 문제 설명

<p>N (1 ≤ N ≤ 1,000) calves try out for the Moo U gymnastics team this year, each with a positive integer height and a weight less than 100,000. Your goal is to select a team of as many calves as possible from this group. There is only one constraint the team must satisfy: the height H and weight W of each calf on the team must obey the following inequality:</p>

<p style="text-align: center;">A*(H-h) + B*(W-w) ≤ C</p>

<p>where h and w are the minimum height and weight values over all calves on the team, and A, B and C are supplied positive integral constants less than 10,000. Compute the maximum number of calves on the team.</p>

### 입력 

 <ul>
	<li>Line 1: A single integer, N</li>
	<li>Line 2: Three space-separated integers, A, B and C</li>
	<li>Lines 3..N+2: Two space-separated integers: respectively the height and weight of a calf</li>
</ul>

### 출력 

 <ul>
	<li>Line 1: One integer, the maximum number of calves on the team.</li>
</ul>

