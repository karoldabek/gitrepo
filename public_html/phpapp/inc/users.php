<?php

class User{

	var $dane = array(); //aby sasugerowac właściwość var nie jest niezbędne ale sie przyjeło że sie stawia
	var $keys = array('id', 'login', 'haslo', 'email', 'data');

	function is_user($sid,$login=NULL,$haslo=NULL) {
			if (!empty($login)) {
				$qstr='SELECT * FROM users WHERE login = \''.$login.'\' AND haslo = \''.sha1($haslo).'\' LIMIT 1';
			} else return false;
			$ret=array();
			db_query($qstr,$ret);
			if (!empty($ret[0])) {
				$this->dane=array_merge($this->dane,$ret[0]);
				$sid=sha1($this->id.$this->login.session_id());
				$_SESSION[$this->uVal] = $sid; // zapis identyfikatora sesji
				return true;
			}
			return false;
		}

	// $this->dane=array_merge($this->dane,$ret[0]); <- wyniki z tego są zapisywane w tym -.-
	// $this - obiekt użytkownika i so tego obiektu używamy tego

	// !empty - czy cokolwiek jest zapisane naprzykład w tym przypadku w &login

	// http(s) // protoków bezstanowy nie pamięta o co się pytał protokul nie zapisuje putań
	// pytanie - odpowiedz
	// login,hasło -> serwer -> SESJA // tu se pamięć zapisuje o użytkowniku i se tam zapamiętuje
	// serwer -> klient -> CIASTKO // klient to przeglądarka; mechanizm ciasteczek (ang. cookie) wszystkie powinny- są to pliki (ciasteczka youtube no ktoś coś o tym godo ale są tam też bzdury coś o śmieciach jak zablokujesz cookie ale tym się nie przejmujemy)
	// ciasteczko jest to plik zapisywany po stronie klienta, zapisy danych użytkowników
	// sesja jest to plik zapisywany po stronie serwera

}

?>