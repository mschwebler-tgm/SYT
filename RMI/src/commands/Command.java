package commands;

import java.io.Serializable;
import java.math.BigDecimal;

public interface Command extends Serializable{
	public BigDecimal execute();
}
