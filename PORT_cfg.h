#ifndef PORT_CFG_H                                                                                                                                    
#define PORT_CFG_H                                                                                                                                    

/*Configuration pin directions options 1-INPUT
										2-OUTPUT                                                                                                      
 */

/*PORTA*/ /*LCD*/
#define PORTA_PIN0_DIR				INPUT                                                                                                             
#define PORTA_PIN1_DIR				OUTPUT
#define PORTA_PIN2_DIR				OUTPUT
#define PORTA_PIN3_DIR				OUTPUT
#define PORTA_PIN4_DIR				OUTPUT
#define PORTA_PIN5_DIR				OUTPUT
#define PORTA_PIN6_DIR				OUTPUT
#define PORTA_PIN7_DIR				INPUT                                                                                                             

/*PORTB*/                                                                                                                                             
#define PORTB_PIN0_DIR				OUTPUT
#define PORTB_PIN1_DIR				OUTPUT
#define PORTB_PIN2_DIR				OUTPUT
#define PORTB_PIN3_DIR				INPUT                                                                                                             
#define PORTB_PIN4_DIR				INPUT                                                                                                             
#define PORTB_PIN5_DIR				INPUT                                                                                                             
#define PORTB_PIN6_DIR				INPUT                                                                                                             
#define PORTB_PIN7_DIR				INPUT                                                                                                             

/*PORTC*/
#define PORTC_PIN0_DIR				OUTPUT
#define PORTC_PIN1_DIR				INPUT
#define PORTC_PIN2_DIR				INPUT
#define PORTC_PIN3_DIR				INPUT
#define PORTC_PIN4_DIR				INPUT
#define PORTC_PIN5_DIR				INPUT
#define PORTC_PIN6_DIR				INPUT
#define PORTC_PIN7_DIR				INPUT

/*PORTD*/ /*KPD*/
#define PORTD_PIN0_DIR				OUTPUT
#define PORTD_PIN1_DIR				OUTPUT
#define PORTD_PIN2_DIR				OUTPUT
#define PORTD_PIN3_DIR				OUTPUT
#define PORTD_PIN4_DIR				INPUT
#define PORTD_PIN5_DIR				INPUT
#define PORTD_PIN6_DIR				INPUT
#define PORTD_PIN7_DIR				INPUT

/*Configuration pins initial values values options
(OITPUT)
	1-HIGH
	2-LOW
(INPUT)
	1-PULLEDUP
	2-FLOATING
 */

/*PORTA*/
#define PORTA_PIN0_InitVal				FLOATING
#define PORTA_PIN1_InitVal				FLOATING
#define PORTA_PIN2_InitVal				FLOATING
#define PORTA_PIN3_InitVal				FLOATING
#define PORTA_PIN4_InitVal				FLOATING
#define PORTA_PIN5_InitVal				FLOATING
#define PORTA_PIN6_InitVal				FLOATING
#define PORTA_PIN7_InitVal				FLOATING

/*PORTB*/
#define PORTB_PIN0_InitVal				FLOATING
#define PORTB_PIN1_InitVal				FLOATING
#define PORTB_PIN2_InitVal				FLOATING
#define PORTB_PIN3_InitVal				FLOATING
#define PORTB_PIN4_InitVal				FLOATING
#define PORTB_PIN5_InitVal				FLOATING
#define PORTB_PIN6_InitVal				FLOATING
#define PORTB_PIN7_InitVal				FLOATING

/*PORTC*/
#define PORTC_PIN0_InitVal				HIGH
#define PORTC_PIN1_InitVal				FLOATING
#define PORTC_PIN2_InitVal				FLOATING
#define PORTC_PIN3_InitVal				FLOATING
#define PORTC_PIN4_InitVal				FLOATING
#define PORTC_PIN5_InitVal				FLOATING
#define PORTC_PIN6_InitVal				FLOATING
#define PORTC_PIN7_InitVal				FLOATING

/*PORTD*/
#define PORTD_PIN0_InitVal				HIGH
#define PORTD_PIN1_InitVal				HIGH
#define PORTD_PIN2_InitVal				HIGH
#define PORTD_PIN3_InitVal				HIGH
#define PORTD_PIN4_InitVal				PULLEDUP
#define PORTD_PIN5_InitVal				PULLEDUP
#define PORTD_PIN6_InitVal				PULLEDUP
#define PORTD_PIN7_InitVal				PULLEDUP

#endif                                                                                                                                                
