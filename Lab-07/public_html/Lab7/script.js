var backElement = document.getElementById("back-button");
backElement.setAttribute('href', document.referrer);

backElement.onclick = function() {
    history.back();
    return false;
}
function validate() {
	const password_1 = document.getElementById("pswd_1").value
	const password_2 = document.getElementById("pswd_2").value

	if (password_1.length < 8)
			alert("The length of your password is less than 8 characters!");
	else if (password_1 != password_2)
			alert("Your confirmation password does not match your password!");
	else
		alert("Everything is good!");
}

function alter_b_and_p_color() {
	const paragraph = document.getElementById("paragraph");

	const p_red = document.getElementById("p_red").value;
	const p_green = document.getElementById("p_green").value;
	const p_blue = document.getElementById("p_blue").value;

	const b_red = document.getElementById("b_red").value;
	const b_green = document.getElementById("b_green").value;
	const b_blue = document.getElementById("b_blue").value;
	const b_width = document.getElementById("b_width").value;

	paragraph.style.color = `rgb(${p_red}, ${p_green}, ${p_blue})`;
	paragraph.style.borderColor = `rgb(${b_red}, ${b_green}, ${b_blue})`;
	paragraph.style.borderWidth = b_width;
}

