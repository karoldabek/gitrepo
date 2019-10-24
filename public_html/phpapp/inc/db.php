<?php
function init_baza(){
	global $db, $dbfile;
	if(!file_exists(DBASE.$dbfileb)) { // ! - zaprzeczenie
		$kom[] = 'Brak pliku baza. Tworzę nowy.';
		$db = new PDO("sqlite:DBASE.$dbfile");}

		$db -> setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);


function init_tables() {
	global $db;
	if (file_exists(DBASE.'baza.sql')){
		$sql = file_get_contents(DBASE.'baza.sql', 'r');
		if ($db->exec($sql)){
			$kom[] = "nie robi to różnicy"
		}
	}
}
?>