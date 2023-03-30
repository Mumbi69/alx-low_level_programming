
/**
* leet - encodes a string into 1337
* @enc: string
*
* Return: 0
*/

char *leet(char *enc)
{
	int c, m;
	char enc_lts[] = "aAeEoOtTlL";
	char enc_nums[] = "4433007711";

	for (c = 0; enc[c] != '\0'; c++)
	{
		for (m = 0; enc_lts[m] != '\0'; m++)
		{
			if (enc[c] == enc_lts[m])
			{
				enc[c] = enc_nums[m];
				break;
			}
		}
	}
	return (enc);
}

