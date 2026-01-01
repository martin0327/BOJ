# [Gold II] Chicken Joggers - 11197 

[문제 링크](https://www.acmicpc.net/problem/11197) 

### 성능 요약

메모리: 12296 KB, 시간: 40 ms

### 분류

다이나믹 프로그래밍, 트리에서의 다이나믹 프로그래밍, 그래프 이론, 트리

### 제출 일자

2026년 1월 1일 22:47:32

### 문제 설명

<p>In the woods of Lill-Jansskogen, there is a network of trails that are often used by joggers. The trails have been much appreciated, and have been specially selected by the professors of the Royal Institute of Technology, enabling university students to take a short break from their studies and refresh their smart minds. Strangely enough, the network of trails actually form a tree. When the trails were selected, the professors of the university took the set of trails that they found in Lill-Jansskogen and created a minimum spanning tree, in order to “encourage and inspire computer science students to participate in physical activities by applying graph theory in the beautiful surroundings of the Royal Institute of Technology”.</p>

<p>Unfortunately, the computer science students are not that brave. Winter is approaching, and it is getting darker and darker in the city of Stockholm. Recently, a bunch of programmers from CSC (Community of Scared Cowards) have been complaining that it is too dark in parts of the trail network at night. Some of the trails are lit up by lamps, but sometimes that is not enough for the CSC. They would like to see that all the trails that they might use are lit up properly!</p>

<p>You have been tasked with satisfying the cowards by placing lamps at intersections. For economic reasons, it might not be possible to place lights at all intersections, so it will suffice to make sure that there is a lamp in at least one of the two intersections adjacent to a trail that could possibly be used by the joggers. Some intersections already have lamps, and of course, you can keep using those lamps.</p>

<p>You don’t know exactly what trails the joggers are using, but you do know that the joggers will always start and finish at the university campus. You also know that joggers are training for an upcoming marathon, so they always run exactly S meters in total. A jogger might turn around at any point in time, even in the middle of a trail and she can do so as many times as she wants, in order to fulfill the requirement of running exactly S meters.</p>

<p>You will be given a map of the woods and the jogging trails included in the minimum spanning tree created by the professors. It is guaranteed that there is exactly one route between each pair of intersections, where a route is a set of adjacent trails. Your task is to find the minimum number of additional lamps you needed in order to satisfy the frightened runners, no matter which trails they use (subject to the restrictions above)</p>

### 입력 

 <p>Input starts with two integers N (2 ≤ N ≤ 50 000), and S (1 ≤ S ≤ 10<sup>4</sup>), the number of intersections and the total distance in meters that a jogger wants to run, respectively. Then follow N − 1 lines with three integers a (1 ≤ a ≤ N), b (1 ≤ b ≤ N), d (1 ≤ d ≤ 100), meaning that there is a bidirectional trail between intersection a and b with length d meters. Then follows a line with a single integer L (0 ≤ L ≤ N), the number of lamps that have already been placed. Then follow L distinct integers ℓ<sub>1</sub>, . . . , ℓ<sub>L</sub> on one line, meaning there is already a lamp placed at intersections ℓ<sub>1</sub>, . . . , ℓ<sub>L</sub>. The university campus is at intersection number 1.</p>

### 출력 

 <p>Output contains a single integer, the minimum number of additional lamps you need to place in order to satisfy the joggers’ requirements.</p>

