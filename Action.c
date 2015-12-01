Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_set_max_html_param_len("898");

/*Correlation comment - Do not change!  Original value='3700282,4029815,4031109,4032677,4033307,4033344,4036527,4038012,4038178,4038214,4038437,4039268,4040170,4041776,4041837,4042158,4042784,4042792,4043041,4043254,4043457,4043459,4044543,4044606,4044954,4045096,4045293,4045820,4045841,4046043,4046304,4046399,4046835,4046837,4046904,4047593,4048007,4048011,4048040,4048854,4048909,4048980,4049063,4049201,4049540,4049550,4049558,4049605,4049832,4050281,4050735,4050891,4050912,4050915,4051105,4051119,4051154,4051282,4051665,4051833,4052284,4052312,4052751,4052804,4052806,4053232,4053236,4053240,4053255,4053261,4053932,4054214,4054223,4054297,4054306,4054354,4054641,4054808,4055088,4055302,8300096,8300273,8300290,8300294,8502094,8502221,8502312,8502315,8502342,8502348,8502452,8502552,8502691,10200083,10201418,10201493' Name ='e' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=e",
		"RegExp=,kEXPI:'(.*?)',authuser:0,j:\\{en:1,bv:24,pm:",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.google.ru/*",
		LAST);

	web_url("google.ru", 
		"URL=http://google.ru/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google.ru/images/branding/googlelogo/2x/googlelogo_color_272x92dp.png", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.google.ru/xjs/_/js/k=xjs.qd.ru.rvmDxvx2M1Y.O/m=sx,c,sb,cdos,cr,elog,jsa,r,hsm,qsm,j,p,d,csi/am=ICkIACCI-M4HgbDCGBOkIhBhMQ/rt=j/d=1/t=zcms/rs=ACT90oECXJWpbm-pG1IpE9-HqQCfLKFTdw", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.google.ru/xjs/_/js/k=xjs.qd.ru.rvmDxvx2M1Y.O/m=abd,sy99,sy98,sy97,sy100,async,erh,sy101,foot,fpe,idck,ipv6,lc,sy70,sy162,lu,m,sf,sy26,sy33,sy34,sy90,sy27,sy37,sy35,sy91,sy56,sy148,sy28,sy46,sy161,sy154,sy156,sy256,sy36,sy263,sy257,sy39,sy270,sy284,em5,sy89,sy131,em15,em14,em12,sy285,skp,vm/am=ICkIACCI-M4HgbDCGBOkIhBhMQ/rt=j/d=0/t=zcms/rs=ACT90oECXJWpbm-pG1IpE9-HqQCfLKFTdw", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.google.ru/s?sclient=psy-ab&newwindow=1&site=&source=hp&q=q&oq=&gs_l=&pbx=1&bav=on.2,or.&bvm=bv.108194040,d.eWE&fp=1&biw=984&bih=537&dpr=1&pf=p&gs_rn=64&gs_ri=psy-ab&cp=1&gs_id=4&xhr=t&tch=1&ech=1&psi=e2xdVt3lMsHjmAGe1beQDA.1448963200859.1", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.google.ru/s?sclient=psy-ab&newwindow=1&site=&source=hp&q=qa&oq=&gs_l=&pbx=1&bav=on.2,or.&bvm=bv.108194040,d.eWE&fp=1&biw=984&bih=537&dpr=1&pf=p&gs_rn=64&gs_ri=psy-ab&cp=2&gs_id=8&xhr=t&tch=1&ech=2&psi=e2xdVt3lMsHjmAGe1beQDA.1448963200859.1", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM, 
		LAST);

	web_add_cookie("OGPC=5-1:; DOMAIN=www.google.ru");

	web_url("gen_204", 
		"URL=https://www.google.ru/gen_204?atyp=i&ct=1&cad=1&rsm=6&ei=e2xdVt3lMsHjmAGe1beQDA&zx=1448963202784", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.ru/?gws_rd=ssl", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/gb/images/i1_1967ca6a.png", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.gstatic.com/og/_/js/k=og.og2.en_US.Jtw7keBB5CY.O/rt=j/t=zcms/m=sy7,sy6,sy24,sy25,sy30,sy26,sy28,def/rs=AA2YrTulM4s5D0gK672_aeZpYEUi22Pdkw", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM, 
		"Url=/search?sclient=psy-ab&newwindow=1&site=&source=hp&q=qaz&oq=qaz&gs_l=hp.12..0i131l3j0.1409.1723.0.3399.3.3.0.0.0.0.316.620.3-2.2.0....0...1c.1.64.psy-ab..1.2.604.YZ0iUWxOllI&pbx=1&bav=on.2,or.&bvm=bv.108194040,d.eWE&fp=1&biw=984&bih=537&dpr=1&tch=1&ech=1&psi=e2xdVt3lMsHjmAGe1beQDA.1448963200859.3", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.gstatic.com/inputtools/images/tia.png", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM, 
		"Url=/xjs/_/js/k=xjs.qd.ru.rvmDxvx2M1Y.O/m=sy74,sy174,sy432,sy433,sy75,sy434,sy458,sy73,sy459,dvl,vs,sy106,sy107,sy109,sy111,sy40,sy41,sy108,sy112,sy42,sy102,sy110,sy113,sy103,tnv,abn,riu,sy44,sy378,sy397,sy399,ilrp,me/am=ICkIACCI-M4HgbDCGBOkIhBhMQ/rt=j/d=0/t=zcms/rs=ACT90oECXJWpbm-pG1IpE9-HqQCfLKFTdw", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM, 
		LAST);

	web_add_cookie("DV=Ms02NZaHv8wdBscyH_zv-xn4zd-5ogI; DOMAIN=www.google.ru");

	web_add_cookie("PREF=ID=1111111111111111:FF=0:TM=1448962953:LM=1448962953:V=1:S=ZfhGyact3LjP1gwY; DOMAIN=apis.google.com");

	web_add_cookie("NID=74=RgpV6EC5_YgaS-V9LucqxiLRDi1uEVYNCip5aGzskVqKcEE3WZK6QOxCaT4Mrpz8kVilBdgh-qhNHlWPekcudRMTqIPLeZYlTSoEbcEpcLk6Uy0D2P9X6iGECISQifcvvdDaHyfJcWU; DOMAIN=apis.google.com");

	web_url("gen_204_2",
		"URL=https://www.google.ru/gen_204?v=3&s=web&atyp=csi&e={e}&ei=hGxdVs-sIoWOmQHxk6OQDA&cr=r&imp=0&pfa=n.2,ttfc.200,ttlc.0,cbt.474&pfm=n.2,ttfc.262,ttlc.0,cbt.474&pmd=max.609,avg.70,359,0,0,0,2,0,0,0,0,0,0,0,0,0,16,0,288,132,609,2&imn=7&adh=&xjs=init.21.22.fpe.11.cdos.3.foot.3.sb.2.p.1,dispose.3.10.foot.1.jsa.1.sb.1.m.0.lu.0&it=jradf.222&ima=6&rt=ol.2341,jsrt.644,prt.2347,pprt.2347,iml.2348,aft.2337",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://www.google.ru/?gws_rd=ssl",
		"Snapshot=t3.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://www.gstatic.com/og/_/ss/k=og.og2.1atop10y4thf1.L.X.O/m=lg/rs=AA2YrTv8i6n__VtaREgQpI7m9gFbHuU2bw", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM,
		"URL=https://www.gstatic.com/og/_/js/k=og.og2.en_US.Jtw7keBB5CY.O/rt=j/t=zcms/m=lat/rs=AA2YrTulM4s5D0gK672_aeZpYEUi22Pdkw", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM,
		"URL=https://apis.google.com/_/scs/abc-static/_/js/k=gapi.gapi.en.MWXgjJdrW-U.O/m=gapi_iframes,googleapis_client,plusone/rt=j/sv=1/d=1/ed=1/am=AAQ/rs=AItRSTMF4wQu85p8WjPpkdh4euJKa6l1Qw/cb=gapi.loaded_0", "Referer=https://www.google.ru/?gws_rd=ssl", ENDITEM,
		LAST);

	return 0;
}