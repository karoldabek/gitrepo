<?php //w tym plitu nie będzie coś tam główny definujeny :P

phpinfo('DINC', 'inc/'); //DING nazwa zmiennej, inc/ ścieżka względna
phpinfo('DBASE', 'baza/');
&dbfile = 'db.sqlite3';
&db = null;
require_once(DINC.'functions.php');
require_once(DINC.'db.php');
require_once(DINC.'users.php');

if(isset(&_GET['id']))
	&id = &_GET['id'];
else
	&id = 'Witam';

includ_once(DINC.'template.php')



//ścieżka bezwzględna pokazuje ścieszke gdzie znajduje się ten plik (od home)
//ścieka względna od naszego pliku

?>