<!DOCTYPE html>
<html lang="en" dir="ltr" class="client-nojs">
<head>
<meta charset="UTF-8" />
<title>&lt;signal.h> Header - C - WikiChip</title>
<meta name="generator" content="MediaWiki 1.25.3" />
<link rel="ExportRDF" type="application/rdf+xml" title="c/signal.h" href="/w/index.php?title=Special:ExportRDF/c/signal.h&amp;xmlmime=rdf" />
<link rel="alternate" type="application/x-wiki" title="Edit" href="/w/index.php?title=c/signal.h&amp;action=edit" />
<link rel="edit" title="Edit" href="/w/index.php?title=c/signal.h&amp;action=edit" />
<link rel="shortcut icon" href="/w/resources/assets/wikichip.png" />
<link rel="search" type="application/opensearchdescription+xml" href="/w/opensearch_desc.php" title="WikiChip (en)" />
<link rel="EditURI" type="application/rsd+xml" href="http://en.wikichip.org/w/api.php?action=rsd" />
<link rel="alternate" hreflang="x-default" href="/wiki/c/signal.h" />
<link rel="copyright" href="http://creativecommons.org/licenses/by-sa/3.0/" />
<link rel="alternate" type="application/atom+xml" title="WikiChip Atom feed" href="/w/index.php?title=Special:RecentChanges&amp;feed=atom" />
<link rel="stylesheet" href="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=ext.smw.style%7Cext.smw.tooltip.styles&amp;only=styles&amp;skin=vector&amp;*" />
<link rel="stylesheet" href="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=mediawiki.legacy.commonPrint%2Cshared%7Cmediawiki.sectionAnchor%7Cmediawiki.skinning.interface%7Cmediawiki.ui.button%7Cskins.vector.styles&amp;only=styles&amp;skin=vector&amp;*" />
<meta name="ResourceLoaderDynamicStyles" content="" />
<link rel="stylesheet" href="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=site&amp;only=styles&amp;skin=vector&amp;*" />
<style>a:lang(ar),a:lang(kk-arab),a:lang(mzn),a:lang(ps),a:lang(ur){text-decoration:none}
/* cache key: wikichip:resourceloader:filter:minify-css:7:4afaec9e01106da924d2f8e76e5f04b6 */</style>
<script src="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=startup&amp;only=scripts&amp;skin=vector&amp;*"></script>
<script>if(window.mw){
mw.config.set({"wgCanonicalNamespace":"","wgCanonicalSpecialPageName":false,"wgNamespaceNumber":0,"wgPageName":"c/signal.h","wgTitle":"c/signal.h","wgCurRevisionId":12704,"wgRevisionId":12704,"wgArticleId":493,"wgIsArticle":true,"wgIsRedirect":false,"wgAction":"view","wgUserName":null,"wgUserGroups":["*"],"wgCategories":["C standard library","signal.h - C"],"wgBreakFrames":false,"wgPageContentLanguage":"en","wgPageContentModel":"wikitext","wgSeparatorTransformTable":["",""],"wgDigitTransformTable":["",""],"wgDefaultDateFormat":"dmy","wgMonthNames":["","January","February","March","April","May","June","July","August","September","October","November","December"],"wgMonthNamesShort":["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"],"wgRelevantPageName":"c/signal.h","wgRelevantArticleId":493,"wgIsProbablyEditable":true,"wgRestrictionEdit":[],"wgRestrictionMove":[],"sfgAutocompleteValues":[],"sfgAutocompleteOnAllChars":false,"sfgFieldProperties":[],"sfgCargoFields":[],"sfgDependentFields":[],"sfgShowOnSelect":[],"sfgScriptPath":"/w/extensions/SemanticForms","edgValues":null,"sfgEDSettings":null,"wgWikiEditorEnabledModules":{"toolbar":true,"dialogs":true,"hidesig":true,"preview":true,"publish":true},"wgCategoryTreePageCategoryOptions":"{\"mode\":0,\"hideprefix\":20,\"showcount\":true,\"namespaces\":false}"});
}</script><script>if(window.mw){
mw.loader.implement("user.options",function($,jQuery){mw.user.options.set({"variant":"en"});});mw.loader.implement("user.tokens",function($,jQuery){mw.user.tokens.set({"editToken":"+\\","patrolToken":"+\\","watchToken":"+\\"});});
/* cache key: wikichip:resourceloader:filter:minify-js:7:a5c52c063dc436c1ca7c9f456936a5e9 */
}</script>
<script>if(window.mw){
mw.loader.load(["ext.smw.style","mediawiki.page.startup","mediawiki.legacy.wikibits","mediawiki.legacy.ajax","skins.vector.js"]);
}</script>
<!--[if lt IE 7]><style type="text/css">body{behavior:url("/w/skins/Vector/csshover.min.htc")}</style><![endif]-->
</head>
<body class="mediawiki ltr sitedir-ltr ns-0 ns-subject page-c_signal_h skin-vector action-view">
		<div id="mw-page-base" class="noprint"></div>
		<div id="mw-head-base" class="noprint"></div>
		<div id="content" class="mw-body" role="main">
			<a id="top"></a>

						<div class="mw-indicators">
</div>
			<h1 id="firstHeading" class="firstHeading" lang="en">&lt;signal.h&gt; Header - C</h1>
						<div id="bodyContent" class="mw-body-content">
									<div id="siteSub">From WikiChip</div>
								<div id="contentSub"><span class="subpages">&lt; <a href="/wiki/c" title="c">c</a></span></div>
												<div id="jump-to-nav" class="mw-jump">
					Jump to:					<a href="#mw-head">navigation</a>, 					<a href="#p-search">search</a>
				</div>
				<div id="mw-content-text" lang="en" dir="ltr" class="mw-content-ltr"><div class="noprint" style="float:right; box-shadow: 0 0 4px #BDBDBD inset; background-color: #FFFFFF; border-radius: 5px; width:220px; padding:10px; margin-left: 10px; margin-bottom: 15px;">
<table cellspacing="0">
<tr>
<td style="border-bottom: 1px dashed #C4C4C4; display: inline-block; width: 217px; text-align: center; font-size: 15px; font-weight: bold; color: #4A98D9; margin-bottom: 10px; padding-bottom: 10px;"> <b><a href="/wiki/c/standard_library" title="c/standard library">C Standard Library</a></b>
</td></tr>
<tr>
<td style="display: block; padding-left: 20px; text-align: left;">
<p><span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/assert.h" title="c/assert.h">&lt;assert.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/complex.h" title="c/complex.h">&lt;complex.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)<small>op</small></span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/ctype.h" title="c/ctype.h">&lt;ctype.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/errno.h" title="c/errno.h">&lt;errno.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/fenv.h&amp;action=edit&amp;redlink=1" class="new" title="c/fenv.h (page does not exist)">&lt;fenv.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/float.h&amp;action=edit&amp;redlink=1" class="new" title="c/float.h (page does not exist)">&lt;float.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/inttypes.h&amp;action=edit&amp;redlink=1" class="new" title="c/inttypes.h (page does not exist)">&lt;inttypes.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/iso646.h" title="c/iso646.h">&lt;iso646.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/normative_addendum_1" title="c/normative addendum 1">NA1</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/limits.h&amp;action=edit&amp;redlink=1" class="new" title="c/limits.h (page does not exist)">&lt;limits.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/locale.h&amp;action=edit&amp;redlink=1" class="new" title="c/locale.h (page does not exist)">&lt;locale.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/math.h&amp;action=edit&amp;redlink=1" class="new" title="c/math.h (page does not exist)">&lt;math.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/setjmp.h" title="c/setjmp.h">&lt;setjmp.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><strong class="selflink">&lt;signal.h&gt;</strong><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/stdalign.h" title="c/stdalign.h">&lt;stdalign.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c11" title="c/c11">C11</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdarg.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdarg.h (page does not exist)">&lt;stdarg.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdatomic.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdatomic.h (page does not exist)">&lt;stdatomic.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c11" title="c/c11">C11</a>)<small>op</small></span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdbool.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdbool.h (page does not exist)">&lt;stdbool.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stddef.h&amp;action=edit&amp;redlink=1" class="new" title="c/stddef.h (page does not exist)">&lt;stddef.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdint.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdint.h (page does not exist)">&lt;stdint.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdio.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdio.h (page does not exist)">&lt;stdio.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdlib.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdlib.h (page does not exist)">&lt;stdlib.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/stdnoreturn.h" title="c/stdnoreturn.h">&lt;stdnoreturn.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c11" title="c/c11">C11</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/string.h&amp;action=edit&amp;redlink=1" class="new" title="c/string.h (page does not exist)">&lt;string.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/tgmath.h&amp;action=edit&amp;redlink=1" class="new" title="c/tgmath.h (page does not exist)">&lt;tgmath.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/threads.h&amp;action=edit&amp;redlink=1" class="new" title="c/threads.h (page does not exist)">&lt;threads.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c11" title="c/c11">C11</a>)<small>op</small></span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/time.h&amp;action=edit&amp;redlink=1" class="new" title="c/time.h (page does not exist)">&lt;time.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/uchar.h&amp;action=edit&amp;redlink=1" class="new" title="c/uchar.h (page does not exist)">&lt;uchar.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c11" title="c/c11">C11</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/wchar.h&amp;action=edit&amp;redlink=1" class="new" title="c/wchar.h (page does not exist)">&lt;wchar.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/normative_addendum_1" title="c/normative addendum 1">NA1</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/wctype.h&amp;action=edit&amp;redlink=1" class="new" title="c/wctype.h (page does not exist)">&lt;wctype.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/normative_addendum_1" title="c/normative addendum 1">NA1</a>)</span></span>
</p>
</td></tr></table>
<hr />
<p><small>op</small> - Optional Header
<span class="noprint plainlinks navbar" style="float:right;"><small><span style="white-space:nowrap;word-spacing:-.12em;"><a href="/wiki/Template:C_Standard_Library" title="Template:C Standard Library"><span style="" title="View this template">v</span></a><span style="">&#32;<b>&#183;</b>&#32;</span><a href="/wiki/Template:C_Standard_Library" title="Template:C Standard Library"><span style="" title="Discuss this template">d</span></a><span style="">&#32;<b>&#183;</b>&#32;</span><a rel="nofollow" class="external text" href="http://en.wikichip.org/w/index.php?title=Template:C_Standard_Library&amp;action=edit"><span style="" title="Edit this template">e</span></a></span></small></span>
</p>
</div>
<p>The <b>&lt;signal.h&gt;</b> header is part of the <a href="/wiki/standard_library" title="standard library">standard library</a> of the <a href="/wiki/C_programming_language" title="C programming language" class="mw-redirect">C programming language</a> which provides the functionality necessary for dealing with various signals.
</p>
<h2><span class="mw-headline" id="Types">Types</span><span class="mw-editsection"><span class="mw-editsection-bracket">[</span><a href="/w/index.php?title=c/signal.h&amp;action=edit&amp;section=1" title="Edit section: Types">edit</a><span class="mw-editsection-bracket">]</span></span></h2>
<table class="wikitable">

<tr>
<th> Type </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=c/signal.h/sig_atomic_t&amp;action=edit&amp;redlink=1" class="new" title="c/signal.h/sig atomic t (page does not exist)">sig_atomic_t</a> </td>
<td>  Integer type of an object that can be accessed as an atomic entity </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr></table>
<h2><span class="mw-headline" id="Macros">Macros</span><span class="mw-editsection"><span class="mw-editsection-bracket">[</span><a href="/w/index.php?title=c/signal.h&amp;action=edit&amp;section=2" title="Edit section: Macros">edit</a><span class="mw-editsection-bracket">]</span></span></h2>
<p>The header provides the following macro definitions:
</p>
<table class="wikitable">

<tr>
<th> Macro Name </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/sig_dfl&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/sig dfl (page does not exist)">SIG_DFL</a> </td>
<td rowspan="3"> macros expand into integral expressions that compare unequal to the address of any declarable function  </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/sig_err&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/sig err (page does not exist)">SIG_ERR</a>  </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/sig_ign&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/sig ign (page does not exist)">SIG_IGN</a>  </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/sigabrt&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/sigabrt (page does not exist)">SIGABRT</a> </td>
<td> expand to positive integer constant expressions with type int; corresponding to an abnormal termination  </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/sigfpe&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/sigfpe (page does not exist)">SIGFPE</a> </td>
<td> expand to positive integer constant expressions with type int; corresponding to an erroneous arithmetic operation  </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/sigill&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/sigill (page does not exist)">SIGILL</a> </td>
<td> expand to positive integer constant expressions with type int; corresponding to a detection of an invalid function image </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/sigint&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/sigint (page does not exist)">SIGINT</a> </td>
<td> expand to positive integer constant expressions with type int; corresponding to a receipt of an interactive attention signal  </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/sigsegv&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/sigsegv (page does not exist)">SIGSEGV</a> </td>
<td> expand to positive integer constant expressions with type int; corresponding to an invalid access to storage  </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/sigterm&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/sigterm (page does not exist)">SIGTERM</a> </td>
<td> expand to positive integer constant expressions with type int; corresponding to a termination request sent to the program </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
</table>
<h2><span class="mw-headline" id="Functions">Functions</span><span class="mw-editsection"><span class="mw-editsection-bracket">[</span><a href="/w/index.php?title=c/signal.h&amp;action=edit&amp;section=3" title="Edit section: Functions">edit</a><span class="mw-editsection-bracket">]</span></span></h2>
<table class="wikitable">

<tr>
<th> Function </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=c/signal.h/signal&amp;action=edit&amp;redlink=1" class="new" title="c/signal.h/signal (page does not exist)">signal</a> </td>
<td> sets up a signal handler for specific signal </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/signal.h/raise&amp;action=edit&amp;redlink=1" class="new" title="c/signal.h/raise (page does not exist)">raise</a> </td>
<td> carries out the action defined by signal() </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
</table>

<!-- 
NewPP limit report
CPU time usage: 0.337 seconds
Real time usage: 0.377 seconds
Preprocessor visited node count: 1844/1000000
Preprocessor generated node count: 1755/1000000
Post‐expand include size: 12048/2097152 bytes
Template argument size: 3247/2097152 bytes
Highest expansion depth: 8/40
Expensive parser function count: 0/100
-->

<!-- 
Transclusion expansion time report (%,ms,calls,template)
100.00%  180.080      1 - -total
 86.81%  156.322      1 - Template:C_Standard_Library
 74.19%  133.595     59 - Template:C
 26.09%   46.985     68 - Template:url_parse_article
 22.46%   40.439     68 - Template:url_parse_anchor
 11.91%   21.443      9 - Template:c
  2.94%    5.294      1 - Template:Navbar
-->

<!-- Saved in parser cache with key wikichip:pcache:idhash:493-0!*!0!!*!*!* and timestamp 20160830053822 and revision id 12704
 -->
</div>									<div class="printfooter">
						Retrieved from "<a dir="ltr" href="http://en.wikichip.org/w/index.php?title=c/signal.h&amp;oldid=12704">http://en.wikichip.org/w/index.php?title=c/signal.h&amp;oldid=12704</a>"					</div>
													<div id='catlinks' class='catlinks'><div id="mw-normal-catlinks" class="mw-normal-catlinks"><a href="/wiki/Special:Categories" title="Special:Categories">Categories</a>: <ul><li><a href="/wiki/Category:C_standard_library" title="Category:C standard library">C standard library</a></li><li><a href="/w/index.php?title=Category:signal.h_-_C&amp;action=edit&amp;redlink=1" class="new" title="Category:signal.h - C (page does not exist)">signal.h - C</a></li></ul></div></div>												<div class="visualClear"></div>
							</div>
		</div>
		<div id="mw-navigation">
			<h2>Navigation menu</h2>

			<div id="mw-head">
									<div id="p-personal" role="navigation" class="" aria-labelledby="p-personal-label">
						<h3 id="p-personal-label">Personal tools</h3>
						<ul>
							<li id="pt-createaccount"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=c%2Fsignal.h&amp;type=signup" title="You are encouraged to create an account and log in; however, it is not mandatory">Create account</a></li><li id="pt-login"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=c%2Fsignal.h" title="You are encouraged to log in; however, it is not mandatory [o]" accesskey="o">Log in</a></li>						</ul>
					</div>
									<div id="left-navigation">
										<div id="p-namespaces" role="navigation" class="vectorTabs" aria-labelledby="p-namespaces-label">
						<h3 id="p-namespaces-label">Namespaces</h3>
						<ul>
															<li  id="ca-nstab-main" class="selected"><span><a href="/wiki/c/signal.h"  title="View the content page [c]" accesskey="c">Page</a></span></li>
															<li  id="ca-talk" class="new"><span><a href="/w/index.php?title=Talk:c/signal.h&amp;action=edit&amp;redlink=1"  title="Discussion about the content page [t]" accesskey="t">Discussion</a></span></li>
													</ul>
					</div>
										<div id="p-variants" role="navigation" class="vectorMenu emptyPortlet" aria-labelledby="p-variants-label">
												<h3 id="p-variants-label"><span>Variants</span><a href="#"></a></h3>

						<div class="menu">
							<ul>
															</ul>
						</div>
					</div>
									</div>
				<div id="right-navigation">
										<div id="p-views" role="navigation" class="vectorTabs" aria-labelledby="p-views-label">
						<h3 id="p-views-label">Views</h3>
						<ul>
															<li id="ca-view" class="selected"><span><a href="/wiki/c/signal.h" >Read</a></span></li>
															<li id="ca-edit"><span><a href="/w/index.php?title=c/signal.h&amp;action=edit"  title="You can edit this page. Please use the preview button before saving [e]" accesskey="e">Edit</a></span></li>
															<li id="ca-history" class="collapsible"><span><a href="/w/index.php?title=c/signal.h&amp;action=history"  title="Past revisions of this page [h]" accesskey="h">View history</a></span></li>
													</ul>
					</div>
										<div id="p-cactions" role="navigation" class="vectorMenu emptyPortlet" aria-labelledby="p-cactions-label">
						<h3 id="p-cactions-label"><span>More</span><a href="#"></a></h3>

						<div class="menu">
							<ul>
															</ul>
						</div>
					</div>
										<div id="p-search" role="search">
						<h3>
							<label for="searchInput">Search</label>
						</h3>

						<form action="/w/index.php" id="searchform">
														<div id="simpleSearch">
															<input type="search" name="search" placeholder="Search" title="Search WikiChip [f]" accesskey="f" id="searchInput" /><input type="hidden" value="Special:Search" name="title" /><input type="submit" name="fulltext" value="Search" title="Search the pages for this text" id="mw-searchButton" class="searchButton mw-fallbackSearchButton" /><input type="submit" name="go" value="Go" title="Go to a page with this exact name if exists" id="searchButton" class="searchButton" />								</div>
						</form>
					</div>
									</div>
			</div>
			<div id="mw-panel">
				<div id="p-logo" role="banner"><a class="mw-wiki-logo" href="/wiki/WikiChip"  title="Visit the main page"></a></div>
						<div class="portal" role="navigation" id='p-navigation' aria-labelledby='p-navigation-label'>
			<h3 id='p-navigation-label'>Navigation</h3>

			<div class="body">
									<ul>
													<li id="n-mainpage-description"><a href="/wiki/WikiChip" title="Visit the main page [z]" accesskey="z">Main page</a></li>
													<li id="n-recentchanges"><a href="/wiki/Special:RecentChanges" title="A list of recent changes in the wiki [r]" accesskey="r">Recent changes</a></li>
													<li id="n-randompage"><a href="http://en.wikichip.org/wiki/Special:Random?nocache=1" title="Load a random page [x]" accesskey="x">Random page</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-tb' aria-labelledby='p-tb-label'>
			<h3 id='p-tb-label'>Tools</h3>

			<div class="body">
									<ul>
													<li id="t-whatlinkshere"><a href="/wiki/Special:WhatLinksHere/c/signal.h" title="A list of all wiki pages that link here [j]" accesskey="j">What links here</a></li>
													<li id="t-recentchangeslinked"><a href="/wiki/Special:RecentChangesLinked/c/signal.h" title="Recent changes in pages linked from this page [k]" accesskey="k">Related changes</a></li>
													<li id="t-specialpages"><a href="/wiki/Special:SpecialPages" title="A list of all special pages [q]" accesskey="q">Special pages</a></li>
													<li id="t-print"><a href="/w/index.php?title=c/signal.h&amp;printable=yes" rel="alternate" title="Printable version of this page [p]" accesskey="p">Printable version</a></li>
													<li id="t-permalink"><a href="/w/index.php?title=c/signal.h&amp;oldid=12704" title="Permanent link to this revision of the page">Permanent link</a></li>
													<li id="t-info"><a href="/w/index.php?title=c/signal.h&amp;action=info" title="More information about this page">Page information</a></li>
													<li id="t-smwbrowselink"><a href="/wiki/Special:Browse/c-2Fsignal.h" rel="smw-browse">Browse properties</a></li>
											</ul>
							</div>
		</div>
				</div>
		</div>
		<div id="footer" role="contentinfo">
							<ul id="footer-info">
											<li id="footer-info-lastmod"> This page was last modified on 23 November 2015, at 15:37.</li>
											<li id="footer-info-copyright">Content is available under <a class="external" rel="nofollow" href="http://creativecommons.org/licenses/by-sa/3.0/">Creative Commons Attribution Share Alike</a> unless otherwise noted.</li>
									</ul>
							<ul id="footer-places">
											<li id="footer-places-privacy"><a href="/wiki/WikiChip:Privacy_policy" title="WikiChip:Privacy policy">Privacy policy</a></li>
											<li id="footer-places-about"><a href="/wiki/WikiChip:About" title="WikiChip:About">About WikiChip</a></li>
											<li id="footer-places-disclaimer"><a href="/wiki/WikiChip:General_disclaimer" title="WikiChip:General disclaimer">Disclaimers</a></li>
									</ul>
										<ul id="footer-icons" class="noprint">
											<li id="footer-copyrightico">
															<a href="http://creativecommons.org/licenses/by-sa/3.0/"><img src="/w/resources/assets/licenses/cc-by-sa.png" alt="Creative Commons Attribution Share Alike" width="88" height="31" /></a>
													</li>
											<li id="footer-poweredbyico">
															<a href="//www.mediawiki.org/"><img src="/w/resources/assets/poweredby_mediawiki_88x31.png" alt="Powered by MediaWiki" srcset="/w/resources/assets/poweredby_mediawiki_132x47.png 1.5x, /w/resources/assets/poweredby_mediawiki_176x62.png 2x" width="88" height="31" /></a>
															<a href="https://www.semantic-mediawiki.org/wiki/Semantic_MediaWiki"><img src="/w/extensions/SemanticMediaWiki/includes/../res/images/smw_button.png" alt="Powered by Semantic MediaWiki" width="88" height="31" /></a>
													</li>
									</ul>
						<div style="clear:both"></div>
		</div>
		<script>if(window.jQuery)jQuery.ready();</script><script>if(window.mw){
mw.loader.state({"site":"loading","user":"ready","user.groups":"ready"});
}</script>
<script>if(window.mw){
mw.loader.load(["ext.smw.tooltips","mediawiki.action.view.postEdit","mediawiki.user","mediawiki.hidpi","mediawiki.page.ready","mediawiki.searchSuggest"],null,true);
}</script>
<script>if(window.mw){
document.write("\u003Cscript src=\"http://en.wikichip.org/w/load.php?debug=false\u0026amp;lang=en\u0026amp;modules=site\u0026amp;only=scripts\u0026amp;skin=vector\u0026amp;*\"\u003E\u003C/script\u003E");
}</script>
<script>if(window.mw){
mw.config.set({"wgBackendResponseTime":963});
}</script>
	</body>
</html>
