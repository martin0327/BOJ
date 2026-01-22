# [Platinum V] Легкое слово - 29305 

[문제 링크](https://www.acmicpc.net/problem/29305) 

### 성능 요약

메모리: 90220 KB, 시간: 136 ms

### 분류

구현, 문자열, KMP

### 제출 일자

2026년 1월 22일 16:30:49

### 문제 설명

<p>Доминика Петрова прилетела в США из Украины с целью получить гражданство и зажить лучшей жизнью. В Америке она вышла замуж за Грегори Хауса и стала Доминикой Хаус. Поначалу ей было очень сложно освоиться в штатах. Еще бы, ведь фиктивный муж не очень стремился ей помогать. Поэтому Доминике пришлось самой изучать сложный английский язык.</p>

<p>По мере того, как Доминика узнавала все новые и новые слова, она поняла, что некоторые слова ей учить проще. Поэтому она ввела понятие сложности слова. Сложность слова --- число, равное сумме двух параметров: отклонение слова от первой буквы и от последней. Отклонение слова от буквы <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D450 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>c</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$c$</span></mjx-container> считается так: для каждой буквы считается модуль разности его позиции в алфавите с позицией буквы <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D450 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>c</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$c$</span></mjx-container>, после чего берется максимум из всех этих величин. </p>

<p>Также Доминика заметила, что после нескольких циклических сдвигов слово переходит само в себя. Теперь ей стало интересно, сколько циклических сдвигов с минимальной сложностью ей встретится до того, как сдвиг строки первый раз совпадет с исходной строкой.</p>

### 입력 

 <p>Во входном файле дано одно слово, состоящее из строчных букв английского алфавита. Длина слова не превосходит <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msup><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msup><mn>10</mn><mn>6</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$10^6$</span></mjx-container>.</p>

### 출력 

 <p>В выходной файл выведите два числа: минимальную сложность циклического сдвига, который встретится Доминике до того, как строка перейдет в себя, и число таких сдвигов.</p>

