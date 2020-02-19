//~ tu bedzie składnia
$(document).ready(function() {
//~ w nawiasach podaje się selektory, a to ready sprawdza czy się to wykonało
//~ ready przyjmuje inwormacje w {}
//~ function na se () i nie ma nazwy jest tylko słowo function

//~ a w tym miejscu wstawiamy coś tam

	$(".wynik").text("Nowa treść"); //~ selektor klasy, zamiast div bo on: div class="wynik"
	console.log($("p").text());
	//~ $("p") <- gdyby tu był input to by tu chodziło o wszystkie jego wersje i tak dalej w ninnych żeczach
	$("#przycisk").click(function(){
		;
	});
});
