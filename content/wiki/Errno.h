<!DOCTYPE html>
<html lang="en" dir="ltr" class="client-nojs">
<head>
<title>&lt;errno.h> Header - C - WikiChip</title>
<meta charset="UTF-8" />
<meta name="generator" content="MediaWiki 1.21.3" />
<link rel="alternate" type="application/x-wiki" title="Edit" href="/w/index.php?title=Errno.h_-_C&amp;action=edit" />
<link rel="edit" title="Edit" href="/w/index.php?title=Errno.h_-_C&amp;action=edit" />
<link rel="shortcut icon" href="/w/skins/common/images/wikichip.png" />
<link rel="search" type="application/opensearchdescription+xml" href="/w/opensearch_desc.php" title="WikiChip (en)" />
<link rel="EditURI" type="application/rsd+xml" href="http://en.wikichip.org/w/api.php?action=rsd" />
<link rel="copyright" href="http://creativecommons.org/licenses/by-sa/3.0/" />
<link rel="alternate" type="application/atom+xml" title="WikiChip Atom feed" href="/w/index.php?title=Special:RecentChanges&amp;feed=atom" />
<link rel="canonical" href="/wiki/Errno.h_-_C" />
<link rel="stylesheet" href="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=ext.rtlcite%7Cmediawiki.legacy.commonPrint%2Cshared%7Cskins.vector&amp;only=styles&amp;skin=vector&amp;*" />
<meta name="ResourceLoaderDynamicStyles" content="" />
<link rel="stylesheet" href="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=site&amp;only=styles&amp;skin=vector&amp;*" />
<style>a:lang(ar),a:lang(ckb),a:lang(fa),a:lang(kk-arab),a:lang(mzn),a:lang(ps),a:lang(ur){text-decoration:none}
/* cache key: wikichip:resourceloader:filter:minify-css:7:f94d0b6cb2fc4f2fb8588cadfb5f9b4c */</style>

<script src="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=startup&amp;only=scripts&amp;skin=vector&amp;*"></script>
<script>if(window.mw){
mw.config.set({"wgCanonicalNamespace":"","wgCanonicalSpecialPageName":false,"wgNamespaceNumber":0,"wgPageName":"Errno.h_-_C","wgTitle":"Errno.h - C","wgCurRevisionId":601,"wgArticleId":349,"wgIsArticle":true,"wgAction":"view","wgUserName":null,"wgUserGroups":["*"],"wgCategories":["C standard library","Errno.h - C","Errors - C"],"wgBreakFrames":false,"wgPageContentLanguage":"en","wgSeparatorTransformTable":["",""],"wgDigitTransformTable":["",""],"wgDefaultDateFormat":"dmy","wgMonthNames":["","January","February","March","April","May","June","July","August","September","October","November","December"],"wgMonthNamesShort":["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"],"wgRelevantPageName":"Errno.h_-_C","wgRestrictionEdit":[],"wgRestrictionMove":[],"wgRedirectedFrom":"Errno.h","wgVectorEnabledModules":{"collapsiblenav":true,"collapsibletabs":true,"expandablesearch":false,"footercleanup":false,"sectioneditlinks":false,"experiments":true},"wgWikiEditorEnabledModules":{"toolbar":true,"dialogs":true,"hidesig":true,"templateEditor":false,"templates":false,"preview":true,"previewDialog":false,"publish":true,"toc":false},"wgCategoryTreePageCategoryOptions":"{\"mode\":0,\"hideprefix\":20,\"showcount\":true,\"namespaces\":false}"});
}</script><script>if(window.mw){
mw.loader.implement("user.options",function(){mw.user.options.set({"ccmeonemails":0,"cols":80,"date":"default","diffonly":0,"disablemail":0,"disablesuggest":0,"editfont":"default","editondblclick":0,"editsection":1,"editsectiononrightclick":0,"enotifminoredits":0,"enotifrevealaddr":0,"enotifusertalkpages":1,"enotifwatchlistpages":0,"extendwatchlist":0,"externaldiff":0,"externaleditor":0,"fancysig":0,"forceeditsummary":0,"gender":"unknown","hideminor":0,"hidepatrolled":0,"imagesize":2,"justify":0,"math":1,"minordefault":0,"newpageshidepatrolled":0,"nocache":0,"noconvertlink":0,"norollbackdiff":0,"numberheadings":0,"previewonfirst":0,"previewontop":1,"quickbar":5,"rcdays":7,"rclimit":50,"rememberpassword":0,"rows":25,"searchlimit":20,"showhiddencats":0,"showjumplinks":1,"shownumberswatching":1,"showtoc":1,"showtoolbar":1,"skin":"vector","stubthreshold":0,"thumbsize":2,"underline":2,"uselivepreview":0,"usenewrc":0,"watchcreations":0,"watchdefault":0,"watchdeletion":0,"watchlistdays":3,
"watchlisthideanons":0,"watchlisthidebots":0,"watchlisthideliu":0,"watchlisthideminor":0,"watchlisthideown":0,"watchlisthidepatrolled":0,"watchmoves":0,"wllimit":250,"vector-simplesearch":1,"upwiz_deflicense":"default","upwiz_def3rdparty":"default","upwiz_deflicensetype":"default","upwiz_maxsimultaneous":"default","usebetatoolbar":1,"usebetatoolbar-cgd":1,"wikieditor-preview":1,"wikieditor-publish":1,"variant":"en","language":"en","searchNs0":true,"searchNs1":false,"searchNs2":false,"searchNs3":false,"searchNs4":false,"searchNs5":false,"searchNs6":false,"searchNs7":false,"searchNs8":false,"searchNs9":false,"searchNs10":false,"searchNs11":false,"searchNs12":false,"searchNs13":false,"searchNs14":false,"searchNs15":false,"searchNs460":false,"searchNs461":false});;},{},{});mw.loader.implement("user.tokens",function(){mw.user.tokens.set({"editToken":"+\\","patrolToken":false,"watchToken":false});;},{},{});
/* cache key: wikichip:resourceloader:filter:minify-js:7:1cef13c864315bd209b5368579a0e04a */
}</script>
<script>if(window.mw){
mw.loader.load(["mediawiki.page.startup","mediawiki.legacy.wikibits","mediawiki.legacy.ajax"]);
}</script>
<!--[if lt IE 7]><style type="text/css">body{behavior:url("/w/skins/vector/csshover.min.htc")}</style><![endif]--></head>
<body class="mediawiki ltr sitedir-ltr ns-0 ns-subject page-Errno_h_-_C skin-vector action-view vector-animateLayout">
		<div id="mw-page-base" class="noprint"></div>
		<div id="mw-head-base" class="noprint"></div>
		<!-- content -->
		<div id="content" class="mw-body" role="main">
			<a id="top"></a>
			<div id="mw-js-message" style="display:none;"></div>
						<!-- firstHeading -->
			<h1 id="firstHeading" class="firstHeading" lang="en"><span dir="auto">&lt;errno.h&gt; Header - C</span></h1>
			<!-- /firstHeading -->
			<!-- bodyContent -->
			<div id="bodyContent">
								<!-- tagline -->
				<div id="siteSub">From WikiChip</div>
				<!-- /tagline -->
								<!-- subtitle -->
				<div id="contentSub">(Redirected from <a href="/w/index.php?title=Errno.h&amp;redirect=no" title="Errno.h">Errno.h</a>)</div>
				<!-- /subtitle -->
																<!-- jumpto -->
				<div id="jump-to-nav" class="mw-jump">
					Jump to:					<a href="#mw-navigation">navigation</a>, 					<a href="#p-search">search</a>
				</div>
				<!-- /jumpto -->
								<!-- bodycontent -->
				<div id="mw-content-text" lang="en" dir="ltr" class="mw-content-ltr"><div class="noprint" style="float:right; box-shadow: 0 0 4px #BDBDBD inset; background-color: #FFFFFF; border-radius: 5px; width:220px; padding:10px; margin-left: 10px; margin-bottom: 15px;">
<table cellspacing="0">
<tr>
<td style="border-bottom: 1px dashed #C4C4C4; display: inline-block; width: 217px; text-align: center; font-size: 15px; font-weight: bold; color: #4A98D9; margin-bottom: 10px; padding-bottom: 10px;"> <b><a href="/wiki/C_Standard_Library" title="C Standard Library" class="mw-redirect">C Standard Library</a></b>
</td></tr>
<tr>
<td style="display: block; padding-left: 20px; text-align: left;">
<p><span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/Assert.h_-_C" title="Assert.h - C">&lt;assert.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/Complex.h_-_C" title="Complex.h - C">&lt;complex.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C99" title="C99">C99</a>)<small>op</small></span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/Ctype.h_-_C" title="Ctype.h - C">&lt;ctype.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><strong class="selflink">&lt;errno.h&gt;</strong><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Fenv.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Fenv.h - C (page does not exist)">&lt;fenv.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C99" title="C99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Float.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Float.h - C (page does not exist)">&lt;float.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Inttypes.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Inttypes.h - C (page does not exist)">&lt;inttypes.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C99" title="C99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/Iso646.h_-_C" title="Iso646.h - C">&lt;iso646.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/Normative_Addendum_1" title="Normative Addendum 1">NA1</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Limits.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Limits.h - C (page does not exist)">&lt;limits.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Locale.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Locale.h - C (page does not exist)">&lt;locale.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Math.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Math.h - C (page does not exist)">&lt;math.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/Setjmp.h_-_C" title="Setjmp.h - C">&lt;setjmp.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/Signal.h_-_C" title="Signal.h - C">&lt;signal.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/Stdalign.h_-_C" title="Stdalign.h - C">&lt;stdalign.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C11" title="C11">C11</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Stdarg.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Stdarg.h - C (page does not exist)">&lt;stdarg.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Stdatomic.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Stdatomic.h - C (page does not exist)">&lt;stdatomic.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C11" title="C11">C11</a>)<small>op</small></span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Stdbool.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Stdbool.h - C (page does not exist)">&lt;stdbool.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C99" title="C99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Stddef.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Stddef.h - C (page does not exist)">&lt;stddef.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Stdint.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Stdint.h - C (page does not exist)">&lt;stdint.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C99" title="C99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Stdio.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Stdio.h - C (page does not exist)">&lt;stdio.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Stdlib.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Stdlib.h - C (page does not exist)">&lt;stdlib.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/Stdnoreturn.h_-_C" title="Stdnoreturn.h - C">&lt;stdnoreturn.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C11" title="C11">C11</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=String.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="String.h - C (page does not exist)">&lt;string.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Tgmath.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Tgmath.h - C (page does not exist)">&lt;tgmath.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C99" title="C99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Threads.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Threads.h - C (page does not exist)">&lt;threads.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C11" title="C11">C11</a>)<small>op</small></span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Time.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Time.h - C (page does not exist)">&lt;time.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Uchar.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Uchar.h - C (page does not exist)">&lt;uchar.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C11" title="C11">C11</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Wchar.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Wchar.h - C (page does not exist)">&lt;wchar.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/Normative_Addendum_1" title="Normative Addendum 1">NA1</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=Wctype.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Wctype.h - C (page does not exist)">&lt;wctype.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/Normative_Addendum_1" title="Normative Addendum 1">NA1</a>)</span></span>
</p>
</td></tr></table>
<hr />
<p><small>op</small> - Optional Header
<span class="noprint plainlinks navbar" style="float:right;"><small><span style="white-space:nowrap;word-spacing:-.12em;"><a href="/wiki/Template:C_Standard_Library" title="Template:C Standard Library"><span style="" title="View this template">v</span></a><span style="">&#32;<b>&#183;</b>&#32;</span><a href="/wiki/Template:C_Standard_Library" title="Template:C Standard Library"><span style="" title="Discuss this template">d</span></a><span style="">&#32;<b>&#183;</b>&#32;</span><a rel="nofollow" class="external text" href="http://en.wikichip.org/w/index.php?title=Template:C_Standard_Library&amp;action=edit"><span style="" title="Edit this template">e</span></a></span></small></span>
</p>
</div>
<p>The <b>&lt;errno.h&gt;</b> header is part of the <a href="/wiki/Standard_library" title="Standard library">standard library</a> of the <a href="/wiki/C_programming_language" title="C programming language" class="mw-redirect">C programming language</a> that defines several macros relating to the reporting of error conditions.
</p><p>Upon failure, library functions that are required to update <a href="/w/index.php?title=Errno.h/errno_-_C&amp;action=edit&amp;redlink=1" class="new" title="Errno.h/errno - C (page does not exist)">errno</a> object. They will do so by setting the value of <a href="/w/index.php?title=Errno.h/errno_-_C&amp;action=edit&amp;redlink=1" class="new" title="Errno.h/errno - C (page does not exist)">errno</a> to an integer value greater than zero. The integer constants defined in this header can be used by the program to test for those errors immediately after the library function call that failed.
</p>
<h2><span class="editsection">[<a href="/w/index.php?title=Errno.h_-_C&amp;action=edit&amp;section=1" title="Edit section: Macros">edit</a>]</span> <span class="mw-headline" id="Macros"> Macros </span></h2>
<p>The header provides two macro definitions:
</p>
<table class="wikitable">

<tr>
<th> Macro Name </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=Errno.h/EDOM_-_C&amp;action=edit&amp;redlink=1" class="new" title="Errno.h/EDOM - C (page does not exist)">EDOM</a> </td>
<td> Expands to a distinct positive integer expression of type int. </td>
<td> <a href="/wiki/C89" title="C89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Errno.h/EILSEQ_-_C&amp;action=edit&amp;redlink=1" class="new" title="Errno.h/EILSEQ - C (page does not exist)">EILSEQ</a> </td>
<td> Expands to a distinct positive integer expression of type int. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Errno.h/ERANGE_-_C&amp;action=edit&amp;redlink=1" class="new" title="Errno.h/ERANGE - C (page does not exist)">ERANGE</a> </td>
<td> Expands to a distinct positive integer expression of type int. </td>
<td> <a href="/wiki/C89" title="C89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Errno.h/errno_-_C&amp;action=edit&amp;redlink=1" class="new" title="Errno.h/errno - C (page does not exist)">errno</a> </td>
<td> Expands to a modifiable lvalue of type int and with thread local storage duration. </td>
<td> <a href="/wiki/C89" title="C89">C89</a>
</td></tr></table>

<!-- 
NewPP limit report
Preprocessor visited node count: 118/1000000
Preprocessor generated node count: 519/1000000
Post‐expand include size: 8702/2097152 bytes
Template argument size: 97/2097152 bytes
Highest expansion depth: 5/40
Expensive parser function count: 0/100
-->

<!-- Saved in parser cache with key wikichip:pcache:idhash:349-0!*!0!*!*!*!* and timestamp 20131229090831 -->
</div>				<!-- /bodycontent -->
								<!-- printfooter -->
				<div class="printfooter">
				Retrieved from "<a href="http://en.wikichip.org/w/index.php?title=Errno.h_-_C&amp;oldid=601">http://en.wikichip.org/w/index.php?title=Errno.h_-_C&amp;oldid=601</a>"				</div>
				<!-- /printfooter -->
												<!-- catlinks -->
				<div id='catlinks' class='catlinks'><div id="mw-normal-catlinks" class="mw-normal-catlinks"><a href="/wiki/Special:Categories" title="Special:Categories">Categories</a>: <ul><li><a href="/wiki/Category:C_standard_library" title="Category:C standard library">C standard library</a></li><li><a href="/w/index.php?title=Category:Errno.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Category:Errno.h - C (page does not exist)">Errno.h - C</a></li><li><a href="/w/index.php?title=Category:Errors_-_C&amp;action=edit&amp;redlink=1" class="new" title="Category:Errors - C (page does not exist)">Errors - C</a></li></ul></div></div>				<!-- /catlinks -->
												<div class="visualClear"></div>
				<!-- debughtml -->
								<!-- /debughtml -->
			</div>
			<!-- /bodyContent -->
		</div>
		<!-- /content -->
		<div id="mw-navigation">
			<h2>Navigation menu</h2>
			<!-- header -->
			<div id="mw-head">
				
<!-- 0 -->
<div id="p-personal" role="navigation" class="">
	<h3>Personal tools</h3>
	<ul>
<li id="pt-createaccount"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=Errno.h+-+C&amp;type=signup">Create account</a></li><li id="pt-login"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=Errno.h+-+C" title="You are encouraged to log in; however, it is not mandatory [o]" accesskey="o">Log in</a></li>	</ul>
</div>

<!-- /0 -->
				<div id="left-navigation">
					
<!-- 0 -->
<div id="p-namespaces" role="navigation" class="vectorTabs">
	<h3>Namespaces</h3>
	<ul>
					<li  id="ca-nstab-main" class="selected"><span><a href="/wiki/Errno.h_-_C"  title="View the content page [c]" accesskey="c">Page</a></span></li>
					<li  id="ca-talk" class="new"><span><a href="/w/index.php?title=Talk:Errno.h_-_C&amp;action=edit&amp;redlink=1"  title="Discussion about the content page [t]" accesskey="t">Discussion</a></span></li>
			</ul>
</div>

<!-- /0 -->

<!-- 1 -->
<div id="p-variants" role="navigation" class="vectorMenu emptyPortlet">
	<h3 id="mw-vector-current-variant">
		</h3>
	<h3><span>Variants</span><a href="#"></a></h3>
	<div class="menu">
		<ul>
					</ul>
	</div>
</div>

<!-- /1 -->
				</div>
				<div id="right-navigation">
					
<!-- 0 -->
<div id="p-views" role="navigation" class="vectorTabs">
	<h3>Views</h3>
	<ul>
					<li id="ca-view" class="selected"><span><a href="/wiki/Errno.h_-_C" >Read</a></span></li>
					<li id="ca-edit"><span><a href="/w/index.php?title=Errno.h_-_C&amp;action=edit"  title="You can edit this page. Please use the preview button before saving [e]" accesskey="e">Edit</a></span></li>
					<li id="ca-history" class="collapsible"><span><a href="/w/index.php?title=Errno.h_-_C&amp;action=history"  title="Past revisions of this page [h]" accesskey="h">View history</a></span></li>
			</ul>
</div>

<!-- /0 -->

<!-- 1 -->
<div id="p-cactions" role="navigation" class="vectorMenu emptyPortlet">
	<h3><span>Actions</span><a href="#"></a></h3>
	<div class="menu">
		<ul>
					</ul>
	</div>
</div>

<!-- /1 -->

<!-- 2 -->
<div id="p-search" role="search">
	<h3><label for="searchInput">Search</label></h3>
	<form action="/w/index.php" id="searchform">
				<div id="simpleSearch">
						<input name="search" title="Search WikiChip [f]" accesskey="f" id="searchInput" />						<button type="submit" name="button" title="Search the pages for this text" id="searchButton"><img src="/w/skins/vector/images/search-ltr.png?303" alt="Search" width="12" height="13" /></button>								<input type='hidden' name="title" value="Special:Search"/>
		</div>
	</form>
</div>

<!-- /2 -->
				</div>
			</div>
			<!-- /header -->
			<!-- panel -->
			<div id="mw-panel">
				<!-- logo -->
					<div id="p-logo" role="banner"><a style="background-image: url(/w/skins/common/images/wikichip.png);" href="/wiki/Main_Page"  title="Visit the main page"></a></div>
				<!-- /logo -->
				
<!-- navigation -->
<div class="portal" role="navigation" id='p-navigation'>
	<h3>Navigation</h3>
	<div class="body">
		<ul>
			<li id="n-mainpage-description"><a href="/wiki/Main_Page" title="Visit the main page [z]" accesskey="z">Main page</a></li>
			<li id="n-recentchanges"><a href="/wiki/Special:RecentChanges" title="A list of recent changes in the wiki [r]" accesskey="r">Recent changes</a></li>
			<li id="n-randompage"><a href="http://en.wikichip.org/wiki/Special:Random?nocache=1" rel="nofollow" title="Load a random page [x]" accesskey="x">Random page</a></li>
		</ul>
	</div>
</div>

<!-- /navigation -->

<!-- SEARCH -->

<!-- /SEARCH -->

<!-- TOOLBOX -->
<div class="portal" role="navigation" id='p-tb'>
	<h3>Tools</h3>
	<div class="body">
		<ul>
			<li id="t-whatlinkshere"><a href="/wiki/Special:WhatLinksHere/Errno.h_-_C" title="A list of all wiki pages that link here [j]" accesskey="j">What links here</a></li>
			<li id="t-recentchangeslinked"><a href="/wiki/Special:RecentChangesLinked/Errno.h_-_C" title="Recent changes in pages linked from this page [k]" accesskey="k">Related changes</a></li>
			<li id="t-upload"><a href="/wiki/Special:UploadWizard" title="Upload files [u]" accesskey="u">Upload file</a></li>
			<li id="t-specialpages"><a href="/wiki/Special:SpecialPages" title="A list of all special pages [q]" accesskey="q">Special pages</a></li>
			<li id="t-print"><a href="/w/index.php?title=Errno.h_-_C&amp;printable=yes" rel="alternate" title="Printable version of this page [p]" accesskey="p">Printable version</a></li>
			<li id="t-permalink"><a href="/w/index.php?title=Errno.h_-_C&amp;oldid=601" title="Permanent link to this revision of the page">Permanent link</a></li>
			<li id="t-info"><a href="/w/index.php?title=Errno.h_-_C&amp;action=info">Page information</a></li>
		</ul>
	</div>
</div>

<!-- /TOOLBOX -->

<!-- LANGUAGES -->

<!-- /LANGUAGES -->
			</div>
			<!-- /panel -->
		</div>
		<!-- footer -->
		<div id="footer" role="contentinfo">
							<ul id="footer-info">
											<li id="footer-info-lastmod"> This page was last modified on 14 December 2013, at 02:17.</li>
											<li id="footer-info-viewcount">This page has been accessed 17 times.</li>
											<li id="footer-info-copyright">Content is available under <a class="external" rel="nofollow" href="http://creativecommons.org/licenses/by-sa/3.0/">Creative Commons Attribution Share Alike</a> unless otherwise noted.</li>
									</ul>
							<ul id="footer-places">
											<li id="footer-places-privacy"><a href="/wiki/WikiChip:Privacy_policy" title="WikiChip:Privacy policy">Privacy policy</a></li>
											<li id="footer-places-about"><a href="/wiki/WikiChip:About" title="WikiChip:About">About WikiChip</a></li>
											<li id="footer-places-disclaimer"><a href="/wiki/WikiChip:General_disclaimer" title="WikiChip:General disclaimer">Disclaimers</a></li>
									</ul>
										<ul id="footer-icons" class="noprint">
					<li id="footer-copyrightico">
						<a href="http://creativecommons.org/licenses/by-sa/3.0/"><img src="/w/skins/common/images/cc-by-sa.png" alt="Creative Commons Attribution Share Alike" width="88" height="31" /></a>
					</li>
					<li id="footer-poweredbyico">
						<a href="//www.mediawiki.org/"><img src="/w/skins/common/images/poweredby_mediawiki_88x31.png" alt="Powered by MediaWiki" width="88" height="31" /></a>
					</li>
				</ul>
						<div style="clear:both"></div>
		</div>
		<!-- /footer -->
		<script>if(window.mw){
mw.loader.state({"site":"loading","user":"missing","user.groups":"ready"});
}</script>
<script>if(window.mw){
mw.loader.load(["mediawiki.action.view.postEdit","mediawiki.user","mediawiki.page.ready","mediawiki.searchSuggest","mediawiki.hidpi","ext.vector.collapsibleNav","ext.vector.collapsibleTabs","skins.vector.js"], null, true);
}</script>
<script src="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=site&amp;only=scripts&amp;skin=vector&amp;*"></script>
<!-- Served in 0.080 secs. -->
	</body>
</html>
