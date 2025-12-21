# [Platinum IV] Go Endgame - 6665 

[문제 링크](https://www.acmicpc.net/problem/6665) 

### 성능 요약

메모리: 2192 KB, 시간: 0 ms

### 분류

구현, 그리디 알고리즘, 시뮬레이션, 게임 이론

### 제출 일자

2025년 12월 21일 11:22:02

### 문제 설명

<p>Go is an oriental board game. The goal in this game is to surround as much territory as possible by stones of your color. This game is very difficult to play for computers -- the best available programs are beaten easily by a human with just a few months of practice. Some parts of the game however can be managed easily under some assumptions. This task is about the endgame stage of the go match, when boarders of all the territories are almost completely finished and the players try to squeeze last few points. Even this stage of the game is very difficult, thus we only concentrate on much simplified model. As usual, the game is played by Alice and Bob, and the alternate on the move.</p>

<p>We assume that Alice has <em>a</em> points of territory and Bob has <em>b</em> points. There are <em>n</em> separated regions such that moves in each of the regions do not affect the moves in other regions. Suppose it is Alice's turn. The endgame proceeds as follows: Alice chooses a region and plays there. Bob responds to this move in the same region, then Alice responds to the Bob's move, and so on, until a settled state is reached. The player who is on turn then chooses another region and plays there, and the game proceeds in the same way until all regions are settled.</p>

<p>The player who starts to play in a region has an advantage and usually gains more points there than the other player. To model this, for the <em>i</em>-th region we know that if Alice starts playing there, she gains <em>a</em><sub>i</sub> points and Bob gains nothing, while if Bob starts playing there, he gains <em>b</em><sub>i</sub> points and Alice gains nothing.</p>

<p>Additionally, playing in this region may be <em>sente</em> for Alice or Bob. If region is sente for the player who starts playing there, he will be on turn after the region is settled, and thus he is the one to choose the next region to play in. If the region is not sente for the player who starts playing there, the other player is on turn when the region is settled. The region may be sente for both players, for only one of them, or for nobody.</p>

<p>Your task is, given the description of the regions, to determine the final score of the game, assuming that both players use the optimal strategy. Each player tries to have the score greater than the score of the other player by as much as possible (or smaller by as little as possible), and among the results with the same difference of scores, they prefer the one where they have the maximal score.</p>

### 입력 

 <p>The input consists of several instances, separated by single empty lines.</p>

<p>The first line of each instance consists of three integers <em>a</em>, <em>b</em> (0 ≤ <em>a</em>, <em>b</em> and <em>a</em> + <em>b</em> ≤ 361) and <em>n</em>(0 ≤ <em>n</em> ≤ 361) separated by single spaces -- the current numbers of points of Alice and Bob, and the number of unresolved regions. Each of the following <em>n</em> lines describes a single region. The line describing the <em>i</em>-th region consists of two integers <em>a</em><sub>i</sub> and <em>b</em><sub>i</sub> (0 ≤ <em>a</em><sub>i</sub>, <em>b</em><sub>i</sub> and 1 ≤ <em>a</em><sub>i</sub> + <em>b</em><sub>i</sub> ≤ 361), and two characters <em>s</em><sub>i</sub> and <em>t</em><sub>i</sub>, separated by single spaces. The integers <em>a</em><sub>i</sub> and <em>b</em><sub>i</sub>are the numbers of points gained by Alice and Bob by starting to play in each region. The character <em>s</em><sub>i</sub> is "S" if the region is sente for Alice, and "G" otherwise. Similarly, <em>t</em><sub>i</sub> is "S" or "G", depending on whether the region is sente for Bob or not.</p>

### 출력 

 <p>The output for each instance consists of a single line containing two integers <em>A</em> and <em>B</em>separated by a single space. These integers are the final number of points of Alice and Bob, assuming that they both play out the rest of the game using the optimal strategy, and Alice is on turn in the beginning. For all input instances, <em>A</em> + <em>B</em> ≤ 361.</p>

