/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

char *greek[]={ 0,	/* 1-indexed */
	"alpha", "beta", "gamma", "delta", "epsilon", "zeta", "eta", "theta",
	"iota", "kappa", "lambda", "mu", "nu", "xsi", "omicron", "pi", "rho",
	"sigma", "tau", "upsilon", "phi", "chi", "psi", "omega",
};

Rune greeklet[]={ 0,
	L'α', L'β', L'γ', L'δ', L'ε', L'ζ', L'η', L'θ', L'ι', L'κ', L'λ',
	L'μ', L'ν', L'ξ', L'ο', L'π', L'ρ', L'σ', L'τ', L'υ', L'φ', L'χ',
	L'ψ', L'ω',
};

char *constel[]={ 0,	/* 1-indexed */
	"and", "ant", "aps", "aql", "aqr", "ara", "ari", "aur", "boo", "cae",
	"cam", "cap", "car", "cas", "cen", "cep", "cet", "cha", "cir", "cma",
	"cmi", "cnc", "col", "com", "cra", "crb", "crt", "cru", "crv", "cvn",
	"cyg", "del", "dor", "dra", "equ", "eri", "for", "gem", "gru", "her",
	"hor", "hya", "hyi", "ind", "lac", "leo", "lep", "lib", "lmi", "lup",
	"lyn", "lyr", "men", "mic", "mon", "mus", "nor", "oct", "oph", "ori",
	"pav", "peg", "per", "phe", "pic", "psa", "psc", "pup", "pyx", "ret",
	"scl", "sco", "sct", "ser", "sex", "sge", "sgr", "tau", "tel", "tra",
	"tri", "tuc", "uma", "umi", "vel", "vir", "vol", "vul",
};
Name names[]={
	"gx",	Galaxy,
	"pl",	PlanetaryN,
	"oc",	OpenCl,
	"gb",	GlobularCl,
	"nb",	DiffuseN,
	"c+n",NebularCl,
	"ast",	Asterism,
	"kt",	Knot,
	"***",	Triple,
	"d*",	Double,
	"*",	Single,
	"pd",	PlateDefect,
	"galaxy",	Galaxy,
	"planetary",	PlanetaryN,
	"opencluster",	OpenCl,
	"globularcluster",	GlobularCl,
	"nebula",	DiffuseN,
	"nebularcluster",NebularCl,
	"asterism",	Asterism,
	"knot",	Knot,
	"triple",	Triple,
	"double",	Double,
	"single",	Single,
	"nonexistent",	Nonexistent,
	"unknown",	Unknown,
	"platedefect",	PlateDefect,
	0,		0,
};
