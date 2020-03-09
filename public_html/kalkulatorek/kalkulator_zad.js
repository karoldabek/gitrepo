$(document).ready(function() {

	$(".wynik").text("Nowa treść");
	console.log($("p").text());

	$("#przycisk1").click(function(){
		var l1 = parseInt($("#l1").val());
		var l2 = parseInt($("#l2").val());
		var D = l1 + l2;
		var div2 = '<div class="wynik">' +D+ '</div>';
		$("div.wynik").after(div2);
	});

	$("#przycisk2").click(function(){
		var l1 = parseInt($("#l1").val());
		var l2 = parseInt($("#l2").val());
		var O = l1 - l2;
		var div2 = '<div class="wynik">' +O+ '</div>';
		$("div.wynik").after(div2);
	});

	$("#przycisk3").click(function(){
		var l1 = parseInt($("#l1").val());
		var l2 = parseInt($("#l2").val());
		var M = l1 * l2;
		var div2 = '<div class="wynik">' +M+ '</div>';
		$("div.wynik").after(div2);
	});

	$("#przycisk4").click(function(){
		var l1 = parseInt($("#l1").val());
		var l2 = parseInt($("#l2").val());
		var Dz = l1 % l2;
		var div2 = '<div class="wynik">' +Dz+ '</div>';
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
