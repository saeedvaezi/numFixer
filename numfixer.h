long long numFixer(CString cnum)
{
	
	cnum.Remove(L" "); //removes spaces
	cnum.Remove(L","); //removes ,
	
	long long mynum = _wtoi64(cnum);
	return mynum;
}

CString numFormatter(long long num)
{
	CString str;
	str.Format(L"%lld", num);

	int n = CString::StringLength(str);
	while (n>3)
	{
		str.Insert(n - 3, _T(','));
		n -= 3;
	}

	return str;
}
