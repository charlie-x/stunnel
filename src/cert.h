#pragma once
// Example certs, replace with real ones
const char* chain_data = "-----BEGIN CERTIFICATE-----\n\
MIIC+DCCAeCgAwIBAgIUf/QOtpYJcDI+7fyAcl5oWZy7FzUwDQYJKoZIhvcNAQEL\n\
BQAwKTENMAsGA1UECgwEb3RveTEYMBYGA1UEAwwPRXhhbXBsZSByb290IENBMB4X\n\
DTIyMDgzMTE5NTEwMloXDTMyMDgyODE5NTEwMlowMTENMAsGA1UECgwEb3RveTEg\n\
MB4GA1UEAwwXRXhhbXBsZSBJbnRlcm1lZGlhdGUgQ0EwggEiMA0GCSqGSIb3DQEB\n\
AQUAA4IBDwAwggEKAoIBAQC7t1cUNq4M8hifIbzhdKYUXk5BITVtn6k7s+XkzuNk\n\
sxXAMR4dSdInNS4NDcTnO2kTy3jTMAMNL0ViK2WBFsSaPSb7cRoeesecPngybAIC\n\
f5/ho9kT5GOVKfjHX8dcS7WvIPkyNlXgCIYhBIyaSixO+JvrDLwYzcUatKz4I2lT\n\
j6CFhvkXCbHzcgJIYmCHjdHw6T6E/QpeC2Qx9QYLgZqMVbGvN2MRaAy+EcsYkTQl\n\
6o45GaXYWnerWVoun2dzYMXH3lq11SsIIg8VOjgPbbWzuH80N9L9lV+H7rRfQf8k\n\
47wqT3pC/MnQ7x0YSU1791FgX2d6i6/mEkM4nVvzG1AvAgMBAAGjEDAOMAwGA1Ud\n\
EwQFMAMBAf8wDQYJKoZIhvcNAQELBQADggEBACIqz0o7cvLV6FyIR9cybGvI45MA\n\
Dz+EvGNaLIMCU9f/YUrLYIEmaUxWhJiEg/vvHlkruoI26YgdiN98+GOl141wd0WX\n\
7/+snx3oA3F8g6yQVnjHcp1ZLmB+IbDu84rYjmN4wAS0HMyXbc67Eslg59+tkH6/\n\
Ohdz7ZhhPeAjZ5JXxW60ozoBcBDFqR2Lw9kjvwnW++nGHrCrWrTa/nu4WYb1NvZT\n\
AKRuc/V/UEW6BtlJKYW0F75YyKv9omN8vDre6m+Cw0C96YTQLeAJybZlKZMELFOH\n\
1TmNHpZAmPCv/13eJadp8VR7tozWU5LmND414NOOE/GZG5gpZEdNIvrL2e4=\n\
-----END CERTIFICATE-----";

const char* key_data = "-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpgIBAAKCAQEA2//yPQ9jLh/4qzReQ/OyHyszE8b5/eIcW92JTsmx+aciU9P7\n\
Tjacnm1HJcJ+CFHlJ21RhyLEPL0evm451LvjF74qkBpapievDa43hRLip7u7L/8O\n\
tdsqVxvxONg90fao4Q5bHls6cNfOQypeCbG+q4MZHljonJPuv+Sw8mTk4mRFGclj\n\
X0mdv+Dc/sy7MbVwDQWIuHTg+NwyaMiE8Pr0s/PHs9u/Wf7WhdZY+U7uOeiErZE9\n\
IiFYWGYeJs3t/5DPsGww5AhBKVsp+/5Jx4iWVVc/Q9JfImVwzgTTTskd8KBAzQPY\n\
2+pqe+CCCCj6lnQteclfu2JzB1JAPp1q8oFhTwIDAQABAoIBAQDHR/hA0UBxFqrl\n\
QoGlIgmWbEZPQu1OydQQbwOi59ccowXYU2wP9C444BoTnTMXDD/8T+0K8TY7IsDH\n\
lQczqaJS7oKVmBnG6qmKReaq12mSsN4l4u+LUeTvlTMT3+VX3QwrGRr2y4KLlyCS\n\
/LzEIUrrB8zoDXdf5izdjCWw3C3s12JlPKyCtcbFTS7Qsf2a6UMKf9xcuNqgNsqZ\n\
agNyf6nTNz1pBqhm0Uhm1xSfuxWjT6XPSbzhcjRhUjUPNYwtBsSbZOSHLGjXZMcW\n\
bi+KAuTGDvjpsFOP2TbZ//7kKIZ0P1Od4kLSX11VHu83Z5IR8QBIUcLxk7nr/z5O\n\
erxwAtgxAoGBAPzfSYAQ3MsndEodM+73Ck6/DHrJA5Vl/Qwp7OqtAcBLr+Xn/wZa\n\
KOxAbUeQcp0+6RTDoXLLcebR6IYbVHC8wfZvnEPsqvCMlNdf36ZHNkszehHDFzU2\n\
84nj3GTLzn6Uuqld1PQmnoF5/6rHpT6VEJNPGRtVrPI4FU6VegPHzni3AoGBAN64\n\
kcsvm62WPOwadbLY7SSgRye6oPqrlofuadccJP/Eeq4ahLKycJD+MecqxfbMwXbp\n\
t/0Jn8KmhjDmvESblNQCOtl+9ONW5TsxcNGDQIB4rRQTHHyxkyNjt9nOMULVyzEz\n\
mtpsx63OUJ1EbUCW3/SHnCLeH3egITXSeu0HzFQpAoGBAK7rbhZuk6zcD+8soD4P\n\
GUw7j9BnuFjiAdcmMUJshqeUM4rfnmOwflpefrlgTEhFukmowcd8v7+hOC18Pj71\n\
814a+odp8R0Qwezx3u1QmVgPtcMPpsAi0PhzbIM1EBQzoaOCyspQ5Jg/4gEqtT3D\n\
M4IS1xU3gLjU3rhLYem3jzWlAoGBAMx5lyB77OlJbVU2VaiFD/L4U1teNDzvG5xg\n\
fjtHU5CdyiPdpMaKnF4Bgb9Bvc3/3f5WRNzC4THLwJdUvrQeQl0CTxUvQZUWSg42\n\
LeWsIqPQJtavVRAF15g+DKSicQdzUMEzJ5AxHoGrUMeR8tvBqIrPlcFNPIaPNO48\n\
9y52YllBAoGBAIi5CB3NjqBzwix9cQA12jS1jXT1bdA1cOecQVBk5LCToE/E+Wz1\n\
vKWDJRxip+JMlzdYeF3PZb45BGOtrePnRDPwo1efQDvDcx4Tcsz4Jj/w3pLFlg2M\n\
Au02KCND6deSbeR70Bl3r/qyuG9rc/Du0zIUlG1hbV5iWds37069JdZK\n\
-----END RSA PRIVATE KEY-----";

const char* cert_data = "-----BEGIN CERTIFICATE-----\n\
MIICyjCCAbICAWUwDQYJKoZIhvcNAQELBQAwMTENMAsGA1UECgwEb3RveTEgMB4G\n\
A1UEAwwXRXhhbXBsZSBJbnRlcm1lZGlhdGUgQ0EwHhcNMjIwODMxMTk1MjU2WhcN\n\
MzIwODI4MTk1MjU2WjAlMQ0wCwYDVQQKDARvdG95MRQwEgYDVQQDDAtleGFtcGxl\n\
LmNvbTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBANv/8j0PYy4f+Ks0\n\
XkPzsh8rMxPG+f3iHFvdiU7JsfmnIlPT+042nJ5tRyXCfghR5SdtUYcixDy9Hr5u\n\
OdS74xe+KpAaWqYnrw2uN4US4qe7uy//DrXbKlcb8TjYPdH2qOEOWx5bOnDXzkMq\n\
XgmxvquDGR5Y6JyT7r/ksPJk5OJkRRnJY19Jnb/g3P7MuzG1cA0FiLh04PjcMmjI\n\
hPD69LPzx7Pbv1n+1oXWWPlO7jnohK2RPSIhWFhmHibN7f+Qz7BsMOQIQSlbKfv+\n\
SceIllVXP0PSXyJlcM4E007JHfCgQM0D2Nvqanvggggo+pZ0LXnJX7ticwdSQD6d\n\
avKBYU8CAwEAATANBgkqhkiG9w0BAQsFAAOCAQEAMwvwLp1Yn3XFhaBGiJyACBh0\n\
uZT/SyZB/e7lCdXcAqELmM6JauSbo/+ReZWhSzSsfAX8gi8z2ENZypX+MuapfRz8\n\
ANzkY6iD2cLaKUKaax3XtMByxATw4nHk3R+ySl/IXq6VI2r6AeesUDP5stGsFE4x\n\
WDlD5V+3Xuwaui0gCQZGuKlYMMNm9gady5i1wV4WtiAy4sg7QSxgO/N4DayX2UAY\n\
4Qb7f0XbzxDl6ITgcCmSUo2ZpCR/8ePfBjd+djp9ndUpLrPIUE+otLJzVL2Kgvs2\n\
87G52OmAwKYLtk5kHfoDTkB5r16WUVO8oNnxmU9jOKGaXQ4mXzk1FDCllA42cQ==\n\
-----END CERTIFICATE-----";