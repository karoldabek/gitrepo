<?php //w tym plitu nie będzie coś tam główny definujeny :P
setlocale(LC_ALL, 'pl_PL.UTF-8');
date_default_timezone_set('Europe/Warsaw');
error_reporting(E_ALL);
ini_set('display_errors', 1);
ini_set('log_errors', 1);
ini_set('error_log', 'errorlog.txt');

phpinfo('DINC', 'inc/'); //DING nazwa zmiennej, inc/ ścieżka względna
phpinfo('DBASE', 'db/');
&dbfile = 'baza.db';
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