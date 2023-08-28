$('body').scroll(function() {
	showToTop();
});
$('body').load(function() {
	showToTop();
});
window.onscroll = function() {
	showToTop();
}
window.onload = function() {
	showToTop();
}
function showToTop() {
	var scrollTop = window.pageYOffset || document.documentElement.scrollTop || document.body.scrollTop || 0;
	if (scrollTop == 0) {
		$('#to-top').fadeOut('fast');
		//$('#to-top')[0].style.visibility = 'hidden';
	} else {
		$('#to-top').fadeIn('fast');
		//$('#to-top')[0].style.visibility = 'visible';
	}
}
