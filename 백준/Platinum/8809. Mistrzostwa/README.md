# [Platinum V] Mistrzostwa - 8809 

[문제 링크](https://www.acmicpc.net/problem/8809) 

### 성능 요약

메모리: 16164 KB, 시간: 148 ms

### 분류

그리디 알고리즘, 트리

### 제출 일자

2025년 12월 20일 12:52:14

### 문제 설명

<p>Firma Instant Preprocessing ma hierarchiczną strukturę zwierzchnictwa:</p>

<ul>
	<li>Każda osoba ma co najwyżej jednego <em>bezpośredniego</em> przełożonego.</li>
	<li>Relacja bycia przełożonym jest przechodnia, co oznacza, że jeśli <strong>A</strong> jest przełożonym <strong>B</strong> ( niekoniecznie bezpośrednim ) i <strong>B</strong> jest przełożonym <strong>C</strong>, to <strong>A</strong> jest przełożonym <strong>C</strong>.</li>
	<li>W relacji nie występują cykle, to znaczy nie istnieją 2 osoby <strong>A</strong>,<strong>B</strong> takie, że: <strong>A</strong> jest przełożonym <strong>B</strong> i <strong>B</strong> jest jest przełożonym <strong>A</strong>. </li>
</ul>

<p>Firma postanowiła zorganizować mistrzostwa w siatkówce plażowej w których startują dwuosobowe zespoły złożone z pracowników firmy. Aby pracownicy nie czuli się skrępowani, mogą powstawać tylko pary (<strong>A</strong>,<strong>B</strong>) takie, że <strong>A</strong> nie jest przełożonym <strong>B</strong> i <strong>B</strong> nie jest przełożonym <strong>A</strong>. Ile maksymalnie drużyn może wystartować w mistrzostwach?</p>

<p>Jedna osoba może wejść w skład co najwyżej jednej drużyny.</p>

### 입력 

 <p>W pierwszej linii wejścia znajduje się liczba zestawów test owych <strong>Z</strong> ( 1 <= <strong>Z</strong> <= 10 ).</p>

<p>W pierwszej lini pojedynczego zestawu znajduje się liczba <strong>N</strong> ( 1 <= <strong>N</strong> <= 10<sup>5 </sup>)<sup> </sup>oznaczająca ilość pracowników firmy. W drugiej lini znajduje się <strong>N</strong> liczb <strong>a</strong><sub>i</sub> ( 1 <= <strong>a</strong><sub><strong>i</strong></sub> <= <strong>N</strong> lub <strong>a</strong><sub><strong>i</strong></sub> = -1<strong> </strong>). <strong>a</strong><sub><strong>i</strong></sub> oznacza numer bezpośredniego przełożonego osoby numer <strong>i</strong>. Jeśli <strong>a</strong><sub>i </sub>= -1, to <strong>i</strong>-ta osoba nie ma przełożonego.</p>

### 출력 

 <p>Dla kazdego zestawu testowego wypisz w osobnej linii maksymalną ilość drużyn jaka może wystartować w mistrzostwach.</p>

