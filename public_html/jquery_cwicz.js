//~ tu bedzie składnia
$(document).ready(function() {
//~ w nawiasach podaje się selektory, a to ready sprawdza czy się to wykonało
//~ function przyjmuje inwormacje w {}
//~ function na se () i nie ma nazwy jest tylko słowo function

//~ a w tym miejscu wstawiamy coś tam

	$(".wynik").text("Nowa treść"); //~ selektor klasy, zamiast div bo on: div class="wynik"
	console.log($("p").text());
	//~ $("p") <- gdyby tu był input to by tu chodziło o wszystkie jego wersje i tak dalej w ninnych żeczach
	$("#przycisk").click(function(){
		var vnk = parseInt($("#vnk").val());
		var nk = parseInt($("#nk").val());
		var R = vnk / nk * 100;
		var div2 = '<div class="wynik">' +R+ '</div>';
		$("div.wynik").after(div2);
	});
	$("input").mouseover(function(){
		$(this).addClass("tloBlue");
	});
	//podczas opuszczania myszki
	$("input").mouseout(function(){
		$(this).addClass("tloBlue");
	})
});
