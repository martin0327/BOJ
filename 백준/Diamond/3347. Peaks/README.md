# [Diamond V] Peaks - 3347 

[문제 링크](https://www.acmicpc.net/problem/3347) 

### 성능 요약

메모리: 39452 KB, 시간: 380 ms

### 분류

자료 구조, 그래프 이론, 그래프 탐색, 이분 탐색, 깊이 우선 탐색, 분리 집합, 플러드 필, 병렬 이분 탐색

### 제출 일자

2026년 1월 10일 10:49:44

### 문제 설명

<p>An alpinist who lives on a mountainous island has climbed to some peak and now wants to reach a higher peak.</p>

<p>To be more precise, every point on the island has a positive elevation above sea level (the elevation of the sea is 0) and if the peak the alpinist is currently on has elevation Ei, then his aim is to reach some peak with elevation Ej(Ej>Ei). Because he is on a peak there is no immediate path uphill – to get to a higher point the alpinist first needs to go downhill to some lower level and only then he can go uphill again. The way down is never as remarkable as the way up, thus, the alpinist wants to maximize the elevation of the lowest point on the path from the current location to the higher peak.</p>

<p><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/3347/1.png" style="float:right; height:203px; width:257px">For example, if the profile of the island is as shown in the figure and the alpinist is at the peak with elevation E<sub>4</sub>, then there are three peaks with higher elevation (E<sub>5</sub>, E<sub>6</sub> and E<sub>7</sub>), but the path with the lowest point having the highest elevation is the path to the peak with elevation E<sub>7</sub> – on this path he never goes below level E<sub>2</sub> (in the other cases he will be forced to go down to level E<sub>1</sub>). If he started from E<sub>5</sub>, the corresponding lowest level would be E<sub>3</sub> (path to E<sub>6</sub>), but if he started from E<sub>6</sub> it would be E<sub>1</sub>.</p>

<p>The map of the island is a two-dimensional rectangular table containing N×M squares and it describes the elevation of particular parts of the island – the number in a cell describes the elevation of the corresponding region of the island. Two cells are adjacent if they share a common point. Thus, each cell (except those on the border) is adjacent to eight other. A path is a sequence of cells where each two consecutive cells are adjacent. A flat area is a set of one or more cells having the same elevation, any pair of them being connected by a path only visiting cells within the set. Any two adjacent cells with equal elevation belong to the same flat area. A peak is a flat area whose cells don’t have any adjacent cells with higher elevation.</p>

<p>Write a program which finds all peaks on the island and for each of them finds the elevation of the highest possible lowest point on a path to some peak with a higher elevation. For the highest peak on the island (for which there is no higher peak on this island) we assume that the alpinist will leave the island looking for higher peaks, thus, the lowest point will be 0 (the level of the sea).</p>

### 입력 

 <p>The first line of input contains two positive integers N and M (1≤N,M≤2000, N×M≤10<sup>5</sup>), the height and the width of the map, respectively. The next N lines contain the description of the map of the island. Each of these lines contains M integers E<sub>ij</sub>(1≤E<sub>ij</sub>≤10<sup>6</sup>) separated by spaces. The elevation of the cell E<sub>ij</sub> (corresponding to i-th row and j-th column on the map) is given as the j-th number in the i+1-st line of the file.</p>

### 출력 

 <p>The first line of output must contain one integer P, the number of peaks found on the island. The next P lines must each contain two integers: the elevation of the particular peak and the elevation of the highest possible lowest point on the path to some higher peak. The information about peaks should be written in descending order of their elevation; if several peaks have the same elevation then they should be sorted in descending order of the lowest point elevation.</p>

