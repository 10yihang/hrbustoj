function check_login_form() {
	if ($('#username').val() == '' || $('#password').val() == '') {
		alert('Please Input Your Username and Password!');
		return false;
	} else {
		return true;
	}
}
function encrypt_login() {
	var uid = document.getElementById('username');
	var pwd = document.getElementById('password');
	var encrypt = new JSEncrypt();
	encrypt.setPublicKey(login_rsa_public_key);
	var encrypted = encrypt.encrypt(JSON.stringify({"username":uid.value, "password": pwd.value}));console.log(encrypted)
	alert(encrypted);
	$('#login_encrypt').val(encrypted);
	$('#password').val('');
}

$('#username').keydown(function(event) {
	if (event.keyCode == 13) {
		$('#password').focus();
		$('#password').select();
	}
});
$('#password').keydown(function(event) {
	if (event.keyCode == 13) {
		if (!check_login_form()) {
			return;
		}
		encrypt_login();
		$('#formLogin').submit();
	}
});
$('#loginsubmit').click(function() {
	if (!check_login_form()) {
		return;
	}
	encrypt_login();
	$('#formLogin').submit();
});
$('#loginreset').click(function() {
	$('#username').val('');
	$('#password').val('');
});
// Modify Password
function check_modify() {
	if ( $('#password').val() == ''
		|| $('#new_password').val() == '' || $('#confirm_password').val() == ''
		|| $('#new_password').val() != $('#confirm_password').val()
		|| $('#verify_code').val() == ''
	) {
		alert('Please input your password, new password , confirm password, verify code!');
		return false;
	} else {
		return true;
	}
}
function encrypt_modify() {
	var username = document.getElementById('username');
	var password = document.getElementById('old_password');
	var new_password = document.getElementById('new_password');
	var confirm_password = document.getElementById('confirm_password');
	var verify_code = document.getElementById('verify_code');
	if (username.value=="" || password.value=="") {
		alert('username or password is empty!');
		return false;
	}
	var encrypt = new JSEncrypt();
	encrypt.setPublicKey(login_rsa_public_key);
	// for shortter encrypted message
	var encrypted = encrypt.encrypt(JSON.stringify({"u":username.value,"p":password.value,"n":new_password.value,"c":confirm_password.value,"verify_code":verify_code.value}));
	$('#modify_encrypt').val(encrypted);
	$('#old_password').val('');
	$('#new_password').val('');
	$('#confirm_password').val('');
	if (!encrypted) {
		var str = JSON.stringify({"username":username.value,"password":password.value,"new_password":new_password.value,"confirm_password":confirm_password.value,"verify_code":verify_code.value});
		console.log('too long! ' + str.length);
		console.log('msg:' + str);
		alert('encrypt fail');
	}
	return encrypted
}
$('#old_password').keydown(function(event) {
	if (event.keyCode == 13) {
		$('#new_password').focus();
		$('#new_password').select();
	}
});
$('#new_password').keydown(function(event) {
	if (event.keyCode == 13) {
		$('#confirm_password').focus();
		$('#confirm_password').select();
	}
});
$('#confirm_password').keydown(function(event) {
	if (event.keyCode == 13) {
		$('#verify_code').focus();
		$('#verify_code').select();
	}
});
$('#verify_code').keydown(function(event) {
	if (event.keyCode == 13) {
		if (!check_modify()) {
			return;
		}
		encrypt_modify();
		$('#formModify').submit();
	}
});

$('#modifysubmit').click(function() {
	if (!check_modify()) {
		return;
	}
	encrypt_modify();
	$('#formModify').submit();
});

