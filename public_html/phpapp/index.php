<?php
setlocale(LC_ALL, 'pl_PL.UTF-8');
date_default_timezone_set('Europe/Warsaw');
error_reporting(E_ALL);
ini_set('display_errors', 1);
ini_set('log_errors', 1);
ini_set('error_log', 'errorlog.txt');

define('DINC', 'inc/');
define('DBASE', 'db/');
$dbfile = DBASE.'baza.db';
$db=null;
$kom = array();
require_once(DINC.'functions.php');
require_once(DINC.'db.php');
require_once(DINC.'users.php');

init_baza();
init_tables();

if (isset($_GET['id']))
	$id=$_GET['id'];
else
	$id='witam';

include_once(DINC.'template.php');

// echo 'zap1WSX';  <- to jest troche marne bo jak ktoś nas to okradnie to będzie miał chasło więc tego sie nie powinno tak zapisywać
// echo sha1('zap1WSX'); //sha1 - zmienia to na kompletnie inny ciąg liczb i dla kążdego hasła jest umikalny: np.c12632g24214353534c2137264512b7467234732g423432766 <- to jest to hasło po użyciu sha1
?>
