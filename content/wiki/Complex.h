<!DOCTYPE html>
<html lang="en" dir="ltr" class="client-nojs">
<head>
<title>&lt;complex.h> Header - C - WikiChip</title>
<meta charset="UTF-8" />
<meta name="generator" content="MediaWiki 1.21.3" />
<link rel="alternate" type="application/x-wiki" title="Edit" href="/w/index.php?title=Complex.h_-_C&amp;action=edit" />
<link rel="edit" title="Edit" href="/w/index.php?title=Complex.h_-_C&amp;action=edit" />
<link rel="shortcut icon" href="/w/skins/common/images/wikichip.png" />
<link rel="search" type="application/opensearchdescription+xml" href="/w/opensearch_desc.php" title="WikiChip (en)" />
<link rel="EditURI" type="application/rsd+xml" href="http://en.wikichip.org/w/api.php?action=rsd" />
<link rel="copyright" href="http://creativecommons.org/licenses/by-sa/3.0/" />
<link rel="alternate" type="application/atom+xml" title="WikiChip Atom feed" href="/w/index.php?title=Special:RecentChanges&amp;feed=atom" />
<link rel="canonical" href="/wiki/Complex.h_-_C" />
<link rel="stylesheet" href="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=ext.rtlcite%7Cmediawiki.legacy.commonPrint%2Cshared%7Cskins.vector&amp;only=styles&amp;skin=vector&amp;*" />
<meta name="ResourceLoaderDynamicStyles" content="" />
<link rel="stylesheet" href="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=site&amp;only=styles&amp;skin=vector&amp;*" />
<style>a:lang(ar),a:lang(ckb),a:lang(fa),a:lang(kk-arab),a:lang(mzn),a:lang(ps),a:lang(ur){text-decoration:none}
/* cache key: wikichip:resourceloader:filter:minify-css:7:f94d0b6cb2fc4f2fb8588cadfb5f9b4c */</style>

<script src="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=startup&amp;only=scripts&amp;skin=vector&amp;*"></script>
<script>if(window.mw){
mw.config.set({"wgCanonicalNamespace":"","wgCanonicalSpecialPageName":false,"wgNamespaceNumber":0,"wgPageName":"Complex.h_-_C","wgTitle":"Complex.h - C","wgCurRevisionId":177,"wgArticleId":96,"wgIsArticle":true,"wgAction":"view","wgUserName":null,"wgUserGroups":["*"],"wgCategories":["C standard library","Complex.h - C"],"wgBreakFrames":false,"wgPageContentLanguage":"en","wgSeparatorTransformTable":["",""],"wgDigitTransformTable":["",""],"wgDefaultDateFormat":"dmy","wgMonthNames":["","January","February","March","April","May","June","July","August","September","October","November","December"],"wgMonthNamesShort":["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"],"wgRelevantPageName":"Complex.h_-_C","wgRestrictionEdit":[],"wgRestrictionMove":[],"wgRedirectedFrom":"Complex.h","wgVectorEnabledModules":{"collapsiblenav":true,"collapsibletabs":true,"expandablesearch":false,"footercleanup":false,"sectioneditlinks":false,"experiments":true},"wgWikiEditorEnabledModules":{"toolbar":true,"dialogs":true,"hidesig":true,"templateEditor":false,"templates":false,"preview":true,"previewDialog":false,"publish":true,"toc":false},"wgCategoryTreePageCategoryOptions":"{\"mode\":0,\"hideprefix\":20,\"showcount\":true,\"namespaces\":false}"});
}</script><script>if(window.mw){
mw.loader.implement("user.options",function(){mw.user.options.set({"ccmeonemails":0,"cols":80,"date":"default","diffonly":0,"disablemail":0,"disablesuggest":0,"editfont":"default","editondblclick":0,"editsection":1,"editsectiononrightclick":0,"enotifminoredits":0,"enotifrevealaddr":0,"enotifusertalkpages":1,"enotifwatchlistpages":0,"extendwatchlist":0,"externaldiff":0,"externaleditor":0,"fancysig":0,"forceeditsummary":0,"gender":"unknown","hideminor":0,"hidepatrolled":0,"imagesize":2,"justify":0,"math":1,"minordefault":0,"newpageshidepatrolled":0,"nocache":0,"noconvertlink":0,"norollbackdiff":0,"numberheadings":0,"previewonfirst":0,"previewontop":1,"quickbar":5,"rcdays":7,"rclimit":50,"rememberpassword":0,"rows":25,"searchlimit":20,"showhiddencats":0,"showjumplinks":1,"shownumberswatching":1,"showtoc":1,"showtoolbar":1,"skin":"vector","stubthreshold":0,"thumbsize":2,"underline":2,"uselivepreview":0,"usenewrc":0,"watchcreations":0,"watchdefault":0,"watchdeletion":0,"watchlistdays":3,
"watchlisthideanons":0,"watchlisthidebots":0,"watchlisthideliu":0,"watchlisthideminor":0,"watchlisthideown":0,"watchlisthidepatrolled":0,"watchmoves":0,"wllimit":250,"vector-simplesearch":1,"upwiz_deflicense":"default","upwiz_def3rdparty":"default","upwiz_deflicensetype":"default","upwiz_maxsimultaneous":"default","usebetatoolbar":1,"usebetatoolbar-cgd":1,"wikieditor-preview":1,"wikieditor-publish":1,"variant":"en","language":"en","searchNs0":true,"searchNs1":false,"searchNs2":false,"searchNs3":false,"searchNs4":false,"searchNs5":false,"searchNs6":false,"searchNs7":false,"searchNs8":false,"searchNs9":false,"searchNs10":false,"searchNs11":false,"searchNs12":false,"searchNs13":false,"searchNs14":false,"searchNs15":false,"searchNs460":false,"searchNs461":false});;},{},{});mw.loader.implement("user.tokens",function(){mw.user.tokens.set({"editToken":"+\\","patrolToken":false,"watchToken":false});;},{},{});
/* cache key: wikichip:resourceloader:filter:minify-js:7:1cef13c864315bd209b5368579a0e04a */
}</script>
<script>if(window.mw){
mw.loader.load(["mediawiki.page.startup","mediawiki.legacy.wikibits","mediawiki.legacy.ajax"]);
}</script>
<style type="text/css">/*<![CDATA[*/
.source-c {line-height: normal;}
.source-c li, .source-c pre {
	line-height: normal; border: 0px none white;
}
/**
 * GeSHi Dynamically Generated Stylesheet
 * --------------------------------------
 * Dynamically generated stylesheet for c
 * CSS class: source-c, CSS id: 
 * GeSHi (C) 2004 - 2007 Nigel McNie, 2007 - 2008 Benny Baumann
 * (http://qbnz.com/highlighter/ and http://geshi.org/)
 * --------------------------------------
 */
.c.source-c .de1, .c.source-c .de2 {font: normal normal 1em/1.2em monospace; margin:0; padding:0; background:none; vertical-align:top;font-family: monospace, monospace;}
.c.source-c  {font-family:monospace;}
.c.source-c .imp {font-weight: bold; color: red;}
.c.source-c li, .c.source-c .li1 {font-weight: normal; vertical-align:top;}
.c.source-c .ln {width:1px;text-align:right;margin:0;padding:0 2px;vertical-align:top;}
.c.source-c .li2 {font-weight: bold; vertical-align:top;}
.c.source-c .kw1 {color: #0000A3; font-weight: bold;}
.c.source-c .kw2 {color: #000000; font-weight: bold;}
.c.source-c .kw3 {color: #000066;}
.c.source-c .kw4 {color: #0057AE;}
.c.source-c .co1 {color: #666666; font-style: italic;}
.c.source-c .co2 {color: #4D8D8D; font-weight: bold;}
.c.source-c .coMULTI {color: #669933; font-style: italic;}
.c.source-c .es0 {color: #000099; font-weight: bold;}
.c.source-c .es1 {color: #000099; font-weight: bold;}
.c.source-c .es2 {color: #660099; font-weight: bold;}
.c.source-c .es3 {color: #660099; font-weight: bold;}
.c.source-c .es4 {color: #660099; font-weight: bold;}
.c.source-c .es5 {color: #006699; font-weight: bold;}
.c.source-c .br0 {color: #007A00;}
.c.source-c .sy0 {color: #339933;}
.c.source-c .st0 {color: #BF0303;}
.c.source-c .nu0 {color: #B08000;}
.c.source-c .nu6 {color: #208080;}
.c.source-c .nu8 {color: #208080;}
.c.source-c .nu12 {color: #208080;}
.c.source-c .nu16 {color:#800080;}
.c.source-c .nu17 {color:#800080;}
.c.source-c .nu18 {color:#800080;}
.c.source-c .nu19 {color:#800080;}
.c.source-c .me1 {color: #202020;}
.c.source-c .me2 {color: #202020;}
.c.source-c .ln-xtra, .c.source-c li.ln-xtra, .c.source-c div.ln-xtra {background-color: #ffc;}
.c.source-c span.xtra { display:block; }

/*]]>*/
</style><!--[if lt IE 7]><style type="text/css">body{behavior:url("/w/skins/vector/csshover.min.htc")}</style><![endif]--></head>
<body class="mediawiki ltr sitedir-ltr ns-0 ns-subject page-Complex_h_-_C skin-vector action-view vector-animateLayout">
		<div id="mw-page-base" class="noprint"></div>
		<div id="mw-head-base" class="noprint"></div>
		<!-- content -->
		<div id="content" class="mw-body" role="main">
			<a id="top"></a>
			<div id="mw-js-message" style="display:none;"></div>
						<!-- firstHeading -->
			<h1 id="firstHeading" class="firstHeading" lang="en"><span dir="auto">&lt;complex.h&gt; Header - C</span></h1>
			<!-- /firstHeading -->
			<!-- bodyContent -->
			<div id="bodyContent">
								<!-- tagline -->
				<div id="siteSub">From WikiChip</div>
				<!-- /tagline -->
								<!-- subtitle -->
				<div id="contentSub">(Redirected from <a href="/w/index.php?title=Complex.h&amp;redirect=no" title="Complex.h">Complex.h</a>)</div>
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
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><strong class="selflink">&lt;complex.h&gt;</strong><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C99" title="C99">C99</a>)<small>op</small></span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/Ctype.h_-_C" title="Ctype.h - C">&lt;ctype.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/Errno.h_-_C" title="Errno.h - C">&lt;errno.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/C89" title="C89">C89</a>)</span></span>
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
<p>The <b>&lt;complex.h&gt;</b> header is part of the <a href="/wiki/Standard_library" title="Standard library">standard library</a> of the <a href="/wiki/C_programming_language" title="C programming language" class="mw-redirect">C programming language</a> which provides a set of macros and functions that support complex arithmetic.
</p><p>This header is <a href="/w/index.php?title=Optional_headers_-_C&amp;action=edit&amp;redlink=1" class="new" title="Optional headers - C (page does not exist)">optional</a> and therefore need not be provided by an implementation. A program can check for the existence of this header by checking if the macro __STDC_NO_COMPLEX__ is defined. When defined, an implementation is not required to provide this header nor any of its facilities.
</p>
<span class="tex2jax_ignore"><div dir="ltr" class="mw-geshi mw-code mw-content-ltr"><div class="c source-c"><pre class="de1"><span class="co2">#ifndef __STDC_NO_COMPLEX__</span>
<span class="co2">#    include &lt;complex.h&gt;</span>
<span class="co2">#else</span>
<span class="co2">#    error Implementation has no complex type support!</span>
<span class="co2">#endif</span></pre></div></div></span>
<table id="toc" class="toc"><tr><td><div id="toctitle"><h2>Contents</h2></div>
<ul>
<li class="toclevel-1 tocsection-1"><a href="#Naming_convention"><span class="tocnumber">1</span> <span class="toctext">Naming convention</span></a></li>
<li class="toclevel-1 tocsection-2"><a href="#Values_in_radians"><span class="tocnumber">2</span> <span class="toctext">Values in radians</span></a></li>
<li class="toclevel-1 tocsection-3"><a href="#Imaginary_unit"><span class="tocnumber">3</span> <span class="toctext">Imaginary unit</span></a></li>
<li class="toclevel-1 tocsection-4"><a href="#Macros"><span class="tocnumber">4</span> <span class="toctext">Macros</span></a></li>
<li class="toclevel-1 tocsection-5"><a href="#Pragmas"><span class="tocnumber">5</span> <span class="toctext">Pragmas</span></a></li>
<li class="toclevel-1 tocsection-6"><a href="#Functions"><span class="tocnumber">6</span> <span class="toctext">Functions</span></a>
<ul>
<li class="toclevel-2 tocsection-7"><a href="#Trigonometric_functions"><span class="tocnumber">6.1</span> <span class="toctext">Trigonometric functions</span></a></li>
<li class="toclevel-2 tocsection-8"><a href="#Hyperbolic_functions"><span class="tocnumber">6.2</span> <span class="toctext">Hyperbolic functions</span></a></li>
<li class="toclevel-2 tocsection-9"><a href="#Exponential_and_logarithmic_functions"><span class="tocnumber">6.3</span> <span class="toctext">Exponential and logarithmic functions</span></a></li>
<li class="toclevel-2 tocsection-10"><a href="#Power_and_absolute-value_functions"><span class="tocnumber">6.4</span> <span class="toctext">Power and absolute-value functions</span></a></li>
<li class="toclevel-2 tocsection-11"><a href="#Manipulation_functions"><span class="tocnumber">6.5</span> <span class="toctext">Manipulation functions</span></a></li>
</ul>
</li>
</ul>
</td></tr></table>
<h2><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=1" title="Edit section: Naming convention">edit</a>]</span> <span class="mw-headline" id="Naming_convention"> Naming convention </span></h2>
<p>The naming convention used in this header is a set of <i>principle functions</i> followed by a number of secondary functions of the same name but with a <b>f</b> and <b>l</b> suffixes for the float and long double versions of the function. The principle function is one with one or more double complex parameters an a double complex or double return value.
</p>
<h2><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=2" title="Edit section: Values in radians">edit</a>]</span> <span class="mw-headline" id="Values_in_radians"> Values in radians </span></h2>
<p>All the functions in this header expect values in radians, not degrees.
</p>
<h2><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=3" title="Edit section: Imaginary unit">edit</a>]</span> <span class="mw-headline" id="Imaginary_unit"> Imaginary unit </span></h2>
<p>The imaginary unit number, commonly denoted as i, is defined as a number <var>i</var> such that <var>i</var><sup>2</sup> = -1.
</p>
<h2><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=4" title="Edit section: Macros">edit</a>]</span> <span class="mw-headline" id="Macros"> Macros </span></h2>
<p>The header provides the following macro definitions:
</p>
<table class="wikitable">

<tr>
<th> Macro Name </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/complex_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/complex - C (page does not exist)">complex</a> </td>
<td> Expands to the _Complex keyword </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/_Complex_I_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ Complex I - C (page does not exist)">_Complex_I</a> </td>
<td> Expands to the value of the imaginary unit with the type const float _Complex. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/imaginary_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/imaginary - C (page does not exist)">imaginary</a> </td>
<td> Expands to _Imaginary keyword </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/_Imaginary_I_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ Imaginary I - C (page does not exist)">_Imaginary_I</a> </td>
<td> Expands to the value of the imaginary unit with the type const float _Imaginary. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/I_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/I - C (page does not exist)">I</a> </td>
<td> Expands to _Imaginary_I if defined, otherwise expands to _Complex_I </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/CMPLX_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/CMPLX - C (page does not exist)">CMPLX</a> </td>
<td> Expand to an expression of type double complex </td>
<td> <a href="/wiki/C11" title="C11">C11</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/CMPLXF_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/CMPLXF - C (page does not exist)">CMPLXF</a> </td>
<td> Expand to an expression of type float complex </td>
<td> <a href="/wiki/C11" title="C11">C11</a>
</td></tr></table>
<h2><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=5" title="Edit section: Pragmas">edit</a>]</span> <span class="mw-headline" id="Pragmas"> Pragmas </span></h2>
<p>The <a href="/w/index.php?title=Algorithms&amp;action=edit&amp;redlink=1" class="new" title="Algorithms (page does not exist)">algorithms</a> used by the functions in this header can be more finely tuned by the following <a href="/w/index.php?title=Pragmas_-_C&amp;action=edit&amp;redlink=1" class="new" title="Pragmas - C (page does not exist)">pragmas</a>:
</p>
<table class="wikitable">

<tr>
<th> Pragma Name </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/STDC_CX_LIMITED_RANGE_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/STDC CX LIMITED RANGE - C (page does not exist)">STDC CX_LIMITED_RANGE</a> </td>
<td> Indicates that the usual mathematical formulas are acceptable. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr></table>
<h2><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=6" title="Edit section: Functions">edit</a>]</span> <span class="mw-headline" id="Functions"> Functions </span></h2>
<p>The &lt;complex.h&gt; header provides functions that fall under five distinct categories:
</p>
<ul><li> <a href="#Trigonometric_functions">Trigonometric functions</a>
</li><li> <a href="#Hyperbolic_functions">Hyperbolic functions</a>
</li><li> <a href="#Exponential_and_logarithmic_functions">Exponential and logarithmic functions</a>
</li><li> <a href="#Power_and_absolute-value_functions">Power and absolute-value functions</a>
</li><li> <a href="#Manipulation_functions">Manipulation functions</a>
</li></ul>
<h3><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=7" title="Edit section: Trigonometric functions">edit</a>]</span> <span class="mw-headline" id="Trigonometric_functions"> Trigonometric functions </span></h3>
<p>This category provides a set of the basic trigonometric functions such as cosine, sine, and tangent as well as arc cosine, arc sine, and arc tangent for operating on complex numbers.
</p>
<table class="wikitable">

<tr>
<th> Function Prototype </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cacos_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cacos - C (page does not exist)">double complex cacos(double complex z);</a> </td>
<td> 	Computes the complex arc cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cacosf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cacosf - C (page does not exist)">float complex cacosf(float complex z);</a> </td>
<td> 	Computes the complex arc cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cacosl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cacosl - C (page does not exist)">long double complex cacosl(long double complex z);</a> </td>
<td> 	Computes the complex arc cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/casin_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/casin - C (page does not exist)">double complex casin(double complex z);</a> </td>
<td> Computes the complex arc sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/casinf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/casinf - C (page does not exist)">float complex casinf(float complex z);</a> </td>
<td> Computes the complex arc sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/casinl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/casinl - C (page does not exist)">long double complex casinl(long double complex z);</a> </td>
<td> Computes the complex arc sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/catan_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/catan - C (page does not exist)">double complex catan(double complex z);</a> </td>
<td> 	Computes the complex arc tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/catanf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/catanf - C (page does not exist)">float complex catanf(float complex z);</a> </td>
<td> 	Computes the complex arc tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/catanl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/catanl - C (page does not exist)">long double complex catanl(long double complex z);</a> </td>
<td> 	Computes the complex arc tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ccos_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ccos - C (page does not exist)">double complex ccos(double complex z);</a> </td>
<td> Computes the complex cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ccosf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ccosf - C (page does not exist)">float complex ccosf(float complex z);</a> </td>
<td> Computes the complex cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ccosl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ccosl - C (page does not exist)">long double complex ccosl(long double complex z);</a> </td>
<td> Computes the complex cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/csin_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/csin - C (page does not exist)">double complex csin(double complex z);</a> </td>
<td> Computes the complex sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/csinf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/csinf - C (page does not exist)">float complex csinf(float complex z);</a> </td>
<td> Computes the complex sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/csinl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/csinl - C (page does not exist)">long double complex csinl(long double complex z);</a> </td>
<td> Computes the complex sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ctan_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ctan - C (page does not exist)">double complex ctan(double complex z);</a> </td>
<td> Computes the complex tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ctanf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ctanf - C (page does not exist)">float complex ctanf(float complex z);</a> </td>
<td> Computes the complex tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ctanl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ctanl - C (page does not exist)">long double complex ctanl(long double complex z);</a> </td>
<td> Computes the complex tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr></table>
<h3><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=8" title="Edit section: Hyperbolic functions">edit</a>]</span> <span class="mw-headline" id="Hyperbolic_functions"> Hyperbolic functions </span></h3>
<p>This category includes a set of functions for computing the hyperbolic cosine, sine, and tangent of complex numbers as well as the arc hyperbolic cosine, sine, and tangent of complex numbers.
</p>
<table class="wikitable">

<tr>
<th> Function Prototype </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cacosh_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cacosh - C (page does not exist)">double complex cacosh(double complex z);</a> </td>
<td> Computes the complex arc hyperbolic cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cacoshf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cacoshf - C (page does not exist)">float complex cacoshf(float complex z);</a> </td>
<td> Computes the complex arc hyperbolic cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cacoshl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cacoshl - C (page does not exist)">long double complex cacoshl(long double complex z);</a> </td>
<td> Computes the complex arc hyperbolic cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/casinh_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/casinh - C (page does not exist)">double complex casinh(double complex z);</a> </td>
<td> Computes the complex arc hyperbolic sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/casinhf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/casinhf - C (page does not exist)">float complex casinhf(float complex z)</a> </td>
<td> Computes the complex arc hyperbolic sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/casinhl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/casinhl - C (page does not exist)">long double complex casinhl(long double complex z);</a> </td>
<td> Computes the complex arc hyperbolic sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/catanh_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/catanh - C (page does not exist)">double complex catanh(double complex z);</a> </td>
<td> Computes the complex arc hyperbolic tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/catanhf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/catanhf - C (page does not exist)">float complex catanhf(float complex z);</a> </td>
<td> Computes the complex arc hyperbolic tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/catanhl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/catanhl - C (page does not exist)">long double complex catanhl(long double complex z);</a> </td>
<td> Computes the complex arc hyperbolic tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ccosh_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ccosh - C (page does not exist)">double complex ccosh(double complex z);</a> </td>
<td> Computes the complex hyperbolic cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ccoshf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ccoshf - C (page does not exist)">float complex ccoshf(float complex z);</a> </td>
<td> Computes the complex hyperbolic cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ccoshl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ccoshl - C (page does not exist)">long double complex ccoshl(long double complex z);</a> </td>
<td> Computes the complex hyperbolic cosine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/csinh_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/csinh - C (page does not exist)">double complex csinh(double complex z);</a> </td>
<td> Computes the complex hyperbolic sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/csinhf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/csinhf - C (page does not exist)">float complex csinhf(float complex z);</a> </td>
<td> Computes the complex hyperbolic sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/csinhl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/csinhl - C (page does not exist)">long double complex csinhl(long double complex z);</a> </td>
<td> Computes the complex hyperbolic sine of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ctanh_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ctanh - C (page does not exist)">double complex ctanh(double complex z);</a> </td>
<td> Computes the complex hyperbolic tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ctanhf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ctanhf - C (page does not exist)">float complex ctanhf(float complex z);</a> </td>
<td> Computes the complex hyperbolic tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/ctanhl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/ctanhl - C (page does not exist)">long double complex ctanhl(long double complex z);</a> </td>
<td> Computes the complex hyperbolic tangent of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr></table>
<h3><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=9" title="Edit section: Exponential and logarithmic functions">edit</a>]</span> <span class="mw-headline" id="Exponential_and_logarithmic_functions"> Exponential and logarithmic functions </span></h3>
<p>Below are a set of functions for computing the base-e exponent or logarithm of a complex number.
</p>
<table class="wikitable">

<tr>
<th> Function Prototype </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cexp_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cexp - C (page does not exist)">double complex cexp(double complex z);</a> </td>
<td> Computes the complex base-e exponential of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cexpf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cexpf - C (page does not exist)">float complex cexpf(float complex z);</a> </td>
<td> Computes the complex base-e exponential of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cexpl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cexpl - C (page does not exist)">long double complex cexpl(long double complex z);</a> </td>
<td> Computes the complex base-e exponential of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/clog_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/clog - C (page does not exist)">double complex clog(double complex z);</a> </td>
<td> Computes the complex natural (base-e) logarithm of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/clogf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/clogf - C (page does not exist)">float complex clogf(float complex z);</a> </td>
<td> Computes the complex natural (base-e) logarithm of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/clogl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/clogl - C (page does not exist)">long double complex clogl(long double complex z);</a> </td>
<td> Computes the complex natural (base-e) logarithm of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr></table>
<h3><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=10" title="Edit section: Power and absolute-value functions">edit</a>]</span> <span class="mw-headline" id="Power_and_absolute-value_functions"> Power and absolute-value functions </span></h3>
<p>This category provides functions that can calculate the the absolute value, power, and square root of complex numbers.
</p>
<table class="wikitable">

<tr>
<th> Function Prototype </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cabs_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cabs - C (page does not exist)">double cabs(double complex z);</a> </td>
<td> Computes the complex absolute value of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cabsf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cabsf - C (page does not exist)">float cabsf(float complex z);</a> </td>
<td> Computes the complex absolute value of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cabsl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cabsl - C (page does not exist)">long double cabsl(long double complex z);</a> </td>
<td> Computes the complex absolute value of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cpow_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cpow - C (page does not exist)">double complex cpow(double complex x, double complex y);</a> </td>
<td> Computes the complex power function x<sup>y</sup>. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cpowf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cpowf - C (page does not exist)">float complex cpowf(float complex x, float complex y);</a> </td>
<td> Computes the complex power function x<sup>y</sup>. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cpowl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cpowl - C (page does not exist)">long double complex cpowl(long double complex x, long double complex y);</a> </td>
<td> Computes the complex power function x<sup>y</sup>. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/csqrt_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/csqrt - C (page does not exist)">double complex csqrt(double complex z);</a> </td>
<td> Computes the complex square root of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/csqrtf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/csqrtf - C (page does not exist)">float complex csqrtf(float complex z);</a> </td>
<td> Computes the complex square root of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/csqrtl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/csqrtl - C (page does not exist)">long double complex csqrtl(long double complex z);</a> </td>
<td> Computes the complex square root of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr></table>
<h3><span class="editsection">[<a href="/w/index.php?title=Complex.h_-_C&amp;action=edit&amp;section=11" title="Edit section: Manipulation functions">edit</a>]</span> <span class="mw-headline" id="Manipulation_functions"> Manipulation functions </span></h3>
<p>The manipulation functions provide a way of accessing the imaginary or real part of a complex number as well as computing its projection and conjugate.
</p>
<table class="wikitable">

<tr>
<th> Function Prototype </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/carg_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/carg - C (page does not exist)">double carg(double complex z);</a> </td>
<td> Computes the phase angle of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cargf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cargf - C (page does not exist)">float cargf(float complex z);</a> </td>
<td> Computes the phase angle of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cargl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cargl - C (page does not exist)">long double cargl(long double complex z);</a> </td>
<td> Computes the phase angle of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cimag_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cimag - C (page does not exist)">double cimag(double complex z);</a> </td>
<td> Computes the imaginary part of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cimagf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cimagf - C (page does not exist)">float cimagf(float complex z);</a> </td>
<td> Computes the imaginary part of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cimagl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cimagl - C (page does not exist)">long double cimagl(long double complex z);</a> </td>
<td> Computes the imaginary part of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/conj_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/conj - C (page does not exist)">double complex conj(double complex z);</a> </td>
<td> Computes the complex conjugate of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/conjf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/conjf - C (page does not exist)">float complex conjf(float complex z);</a> </td>
<td> Computes the complex conjugate of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/conjl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/conjl - C (page does not exist)">long double complex conjl(long double complex z);</a> </td>
<td> Computes the complex conjugate of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cproj_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cproj - C (page does not exist)">double complex cproj(double complex z);</a> </td>
<td> Computes a projection of z onto the Riemann sphere. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cprojf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cprojf - C (page does not exist)">float complex cprojf(float complex z);</a> </td>
<td> Computes a projection of z onto the Riemann sphere. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/cprojl_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/cprojl - C (page does not exist)">long double complex cprojl(long double complex z);</a> </td>
<td> Computes a projection of z onto the Riemann sphere. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> &#160; </td>
<td> &#160; </td>
<td>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/creal_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/creal - C (page does not exist)">double creal(double complex z);</a> </td>
<td> The creal functions compute the real part of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/crealf_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/crealf - C (page does not exist)">float crealf(float complex z);</a> </td>
<td> The creal functions compute the real part of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=Complex.h/creall_-_C&amp;action=edit&amp;redlink=1" class="new" title="Complex.h/creall - C (page does not exist)">long double creall(long double complex z);</a> </td>
<td> The creal functions compute the real part of z. </td>
<td> <a href="/wiki/C99" title="C99">C99</a>
</td></tr></table>

<!-- 
NewPP limit report
Preprocessor visited node count: 168/1000000
Preprocessor generated node count: 581/1000000
Post‐expand include size: 8702/2097152 bytes
Template argument size: 97/2097152 bytes
Highest expansion depth: 5/40
Expensive parser function count: 0/100
-->

<!-- Saved in parser cache with key wikichip:pcache:idhash:96-0!*!0!!en!*!* and timestamp 20131229225204 -->
</div>				<!-- /bodycontent -->
								<!-- printfooter -->
				<div class="printfooter">
				Retrieved from "<a href="http://en.wikichip.org/w/index.php?title=Complex.h_-_C&amp;oldid=177">http://en.wikichip.org/w/index.php?title=Complex.h_-_C&amp;oldid=177</a>"				</div>
				<!-- /printfooter -->
												<!-- catlinks -->
				<div id='catlinks' class='catlinks'><div id="mw-normal-catlinks" class="mw-normal-catlinks"><a href="/wiki/Special:Categories" title="Special:Categories">Categories</a>: <ul><li><a href="/wiki/Category:C_standard_library" title="Category:C standard library">C standard library</a></li><li><a href="/wiki/Category:Complex.h_-_C" title="Category:Complex.h - C">Complex.h - C</a></li></ul></div></div>				<!-- /catlinks -->
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
<li id="pt-createaccount"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=Complex.h+-+C&amp;type=signup">Create account</a></li><li id="pt-login"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=Complex.h+-+C" title="You are encouraged to log in; however, it is not mandatory [o]" accesskey="o">Log in</a></li>	</ul>
</div>

<!-- /0 -->
				<div id="left-navigation">
					
<!-- 0 -->
<div id="p-namespaces" role="navigation" class="vectorTabs">
	<h3>Namespaces</h3>
	<ul>
					<li  id="ca-nstab-main" class="selected"><span><a href="/wiki/Complex.h_-_C"  title="View the content page [c]" accesskey="c">Page</a></span></li>
					<li  id="ca-talk" class="new"><span><a href="/w/index.php?title=Talk:Complex.h_-_C&amp;action=edit&amp;redlink=1"  title="Discussion about the content page [t]" accesskey="t">Discussion</a></span></li>
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
					<li id="ca-view" class="selected"><span><a href="/wiki/Complex.h_-_C" >Read</a></span></li>
					<li id="ca-edit"><span><a href="/w/index.php?title=Complex.h_-_C&amp;action=edit"  title="You can edit this page. Please use the preview button before saving [e]" accesskey="e">Edit</a></span></li>
					<li id="ca-history" class="collapsible"><span><a href="/w/index.php?title=Complex.h_-_C&amp;action=history"  title="Past revisions of this page [h]" accesskey="h">View history</a></span></li>
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
			<li id="t-whatlinkshere"><a href="/wiki/Special:WhatLinksHere/Complex.h_-_C" title="A list of all wiki pages that link here [j]" accesskey="j">What links here</a></li>
			<li id="t-recentchangeslinked"><a href="/wiki/Special:RecentChangesLinked/Complex.h_-_C" title="Recent changes in pages linked from this page [k]" accesskey="k">Related changes</a></li>
			<li id="t-upload"><a href="/wiki/Special:UploadWizard" title="Upload files [u]" accesskey="u">Upload file</a></li>
			<li id="t-specialpages"><a href="/wiki/Special:SpecialPages" title="A list of all special pages [q]" accesskey="q">Special pages</a></li>
			<li id="t-print"><a href="/w/index.php?title=Complex.h_-_C&amp;printable=yes" rel="alternate" title="Printable version of this page [p]" accesskey="p">Printable version</a></li>
			<li id="t-permalink"><a href="/w/index.php?title=Complex.h_-_C&amp;oldid=177" title="Permanent link to this revision of the page">Permanent link</a></li>
			<li id="t-info"><a href="/w/index.php?title=Complex.h_-_C&amp;action=info">Page information</a></li>
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
											<li id="footer-info-lastmod"> This page was last modified on 1 December 2013, at 16:43.</li>
											<li id="footer-info-viewcount">This page has been accessed 47 times.</li>
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
<!-- Served in 0.085 secs. -->
	</body>
</html>
