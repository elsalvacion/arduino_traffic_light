
/**
 * First we initialize the output pins in array
 * Initialize the length of the lights in my country it is three
 * Specify the index of the middle light which is either yellow or orange
 */

int outputPins [] = {10, 11, 12} , len = 3, mid_index = 1;


void setup() {
  // put your setup code here, to run once:
  /**
   * Prepare the pins for output
   */
  for (int  i = 0; i < len; i++)
  {
    pinMode(outputPins[i], OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:


  /**
   * Loop the first cycle of the lights by specifyimng the delays based on your country standards
   */

  for (int  i = 0; i < len ; i++)
  {
    int count = i + 1;
    digitalWrite(outputPins[i], HIGH);
    if (count == 2)
    {
      delay(5000);
    }
    else
    {
      delay(30000);
    }
    digitalWrite(outputPins[i], LOW);

  }

  /**
   * After the first cycle go back to the middle light befores repeatiung the process
   */
  digitalWrite(outputPins[mid_index], HIGH);
  delay(5000);
  digitalWrite(outputPins[mid_index], LOW);
}
