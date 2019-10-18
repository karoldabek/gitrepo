<?php
function init_baza(){
	global $db, $dbfile;
	if(!file_exists(DBASE.$dbfileb)) {
		$kom[] = 'Brak pliku baza. Tworzę nowy.';
		$db = new PDO("sqlite:DBASE.$dbfile");
	}
		$db -> setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
}
;
?>