
const jsdom = require("jsdom");

const {JSDOM} = jsdom;
const dom = new JSDOM(`<!DOCTYPE html><p>Hello world</p>`);
window = dom.window;
document = window.document;
XMLHttpRequest = window.XMLHttpRequest;
const JSEncrypt = require('jsencrypt');
var login_rsa_public_key = "-----BEGIN PUBLIC KEY-----MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC88fBRU1FaC5S537krMDVDapOZk44Nw+Yud69IPZYwk9HT0n6D7Pvp3mXp+Par6gp5HUW3tFs7/l3cTIqryEXMfJXRF7FlneM64kLs/KZ2i0larVrz7QgcTb5oAuHeIE24Uc0ja+S83Hlc2Dk6z1TWkAjG2f/p15xRfv/IO5yyywIDAQAB-----END PUBLIC KEY-----"
var encrypt = new JSEncrypt();
	encrypt.setPublicKey(login_rsa_public_key);
	var encrypted = encrypt.encrypt(JSON.stringify({"username":"2204010110".value, "password": '087116'}));
    console.log(encrypted);
   