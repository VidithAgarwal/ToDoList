window.setTimeout(function(){
	$("ul").on("click", "li", function(){
		$(this).toggleClass("strikeTrough");
	});
	$("ul").on("click", "span", function(event){
		event.stopPropagation();
		$(this).parent().fadeOut(500, function(){
			$(this).remove();
		});
	});
	$("input[type = 'text']").keypress(function(event){
		if (event.which === 13) {
			var text = $(this).val();
			$(this).val("");
			$("ul").append("<li><span class='delete'><i class='far fa-trash-alt'></i></span>" + text + "</li>");
		}
	})
	$("#toggle").click(function(){
		$("input").fadeToggle();
	})
}, 500);