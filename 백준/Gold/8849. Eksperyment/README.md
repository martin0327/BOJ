# [Gold II] Eksperyment - 8849 

[문제 링크](https://www.acmicpc.net/problem/8849) 

### 성능 요약

메모리: 18324 KB, 시간: 104 ms

### 분류

그래프 이론, 방향 비순환 그래프, 위상 정렬

### 제출 일자

2026년 3월 17일 08:34:20

### 문제 설명

<p>Syn pana Wincentego, Witek, razem z kolegami przygotowuje projekt naukowy. Chłopcy konstruują labirynt dla mrówek składający się z N pól (numerowanych od 0 do N-1) w których mrówki mogą przebywać i pewnej liczby jednokierunkowych korytarzy łączących te pola.</p>

<p>Witek z kolegami ustalili już, które pola będą połączone korytarzami i wybrali kierunki niektórych z nich. Gdy labirynt będzie gotowy, chłopcy umieszczą w wybranych polach mrówki i zaczekają, aż te zakończą wędrowanie po labiryncie - wtedy będą mogli zbadać w których polach zgromadziło się najwięcej owadów.</p>

<p>Niestety mrówki których zachowania badają są niezwykle ruchliwe. Każda z nich będzie poruszać się po labiryncie losowo wybierając korytarze dopóki nie znajdzie się w polu bez wyjścia. Chłopcy chcą, aby mimo to prędzej czy później eksperyment się zakończył - muszą tak ustalić kierunki pozostałych korytarzy, aby żadna mrówka nie była w stanie krążyć po labiryncie bez końca.</p>

### 입력 

 <p>W pierwszej linii wejścia znajdują się trzy liczby naturalne N, A i B ( 1 <= N, A, B <= 200000).</p>

<p>Następnie podawane jest A linii opisujących korytarze o ustalonym kierunku. W każdej z tych linii znajdują się dwie liczby naturalne S i K, oznaczające odpowiednio - numer pola z którego wychodzi dany korytarz, i numer pola do którego dany korytarz prowadzi.</p>

<p>Następnie podawane jest B linii opisujących korytarze o nieustalonym dotąd kierunku. W każdej z tych linii znajdują się dwie liczby naturalne S i K, oznaczające pola, które łączy dany korytarz.</p>

<p>Dla każdej pary S i K, S będzie różne od K. Dla każdego zestawu testowego będzie istnieć poprawne rozwiązanie.</p>

### 출력 

 <p>Dla każdego korytarza o nieustalonym dotąd kierunku, w kolejności, w jakiej podawane są na wejściu, wypisz w osobnej linii 0, jeśli korytarz ma prowadzić w kierunku zgodnym z kolejnością podania pól S i K na wejściu, lub 1, jeśli kierunek ma być przeciwny.</p>

