
#include"database.h"


/******************************************* EN_transState_t**********************************************/

EN_transState_t recieveTransactionData(ST_transaction_t *transData)
{









}



// implement test function here

/************************************** END OF EN_transState_t ***********************************************/








/** REQUIRMENTS :-
 1- check pan given with pan in database   --- (done)
 2- if exists  --> SEREVER_OK           ----> return reference to this account in the DB    --- (done)
 3- if not     --> ACCOUNT_NOT_FOUND    ----> return ACCOUNT_NOT_FOUND
                                        ----> account reference will be NULL


/******************************************* isValidAccount **********************************************/

EN_serverError_t isValidAccount(ST_cardData_t *cardData, ST_accountsDB_t *accountRefrence)
{


    uint8_t exist_flag = 0 ;
    EN_serverError_t server_status ;

    for(uint8_t account_num= 0 ; account_num< 10 ; account_num++)
    {
        for(uint8_t counter = 0 ; counter < 20 ; counter++)
        {
            if( cardData->primaryAccountNumber[counter] == (accountRefrence)->primaryAccountNumber[counter] )
            {
                exist_flag =1 ;
            }
            else
            {
                accountRefrence++;
                exist_flag =0;
                break ;
            }
        }
    }

    if(exist_flag)
    {
        server_status = SERVER_OK ;


    }
    else
    {
        server_status =ACCOUNT_NOT_FOUND  ;
        accountRefrence = NULL ;

    }
    return server_status ;
}

// implement test function here


void isValidAccountTest(void)
{
    uint8_t  actualResult ;
    ST_cardData_t user1 =
    {
        "kareem magdy","77777777777777777777", "02/22"
    };


    printf("Tester : Kareem Magdy \n");
    printf( "Function Name: isValidAccount \n\n");
    printf("--------------------------------------------------------------\n");
    printf("Test Case 1: \n");
    printf("    Input Data:   \n");
    printf("        - pointer to ST_cardData_t has the following data ( kareem magdy , 77777777777777777777 , 02/22 ) \n");
    printf("        - DataBase for ST_accountsDB_t \n");
    printf("    Expected Result: ACCOUNT_NOT_FOUND \n");


    actualResult =isValidAccount(&user1,accountsDB);
    if(actualResult== ACCOUNT_NOT_FOUND)
    printf("    Actual Result:  ACCOUNT_NOT_FOUND \n ");

    printf("--------------------------------------------------------------\n");



}

/*************************************** END OF isValidAccount ***********************************************/












/******************************************* isBlockedAccount **********************************************/

EN_serverError_t isBlockedAccount(ST_accountsDB_t *accountRefrence)
{













}


// implement test function here

/*************************************** END OF isBlockedAccount ***********************************************/










/******************************************* isAmountAvailable **********************************************/

EN_serverError_t isAmountAvailable(ST_terminalData_t *termData, ST_accountsDB_t *accountRefrence)
{









}


// implement test function here



/*************************************** END OF isAmountAvailable ***********************************************/










/******************************************* saveTransaction **********************************************/

EN_serverError_t saveTransaction(ST_transaction_t *transData)
{












}


// implement test function here

/*************************************** END OF saveTransaction ***********************************************/
